----------------------------------------------------------------------------------
-- Team: K 
-- Engineer: 170050027, 170050035, 170050045, 17D070059 
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Arbiter is
    Port ( clk : in  STD_LOGIC;
           din1 : in  STD_LOGIC_VECTOR (4 downto 0);
           din2 : in  STD_LOGIC_VECTOR (4 downto 0);
           din3 : in  STD_LOGIC_VECTOR (4 downto 0);
           din4 : in  STD_LOGIC_VECTOR (4 downto 0);
           grant : inout  STD_LOGIC_VECTOR (3 downto 0) := "0000";
           prog_fullv : out  STD_LOGIC_VECTOR (3 downto 0) := "0000";
           fullv : out  STD_LOGIC_VECTOR (3 downto 0);
           data_out : inout  STD_LOGIC_VECTOR (4 downto 0);
			  rst : in STD_LOGIC);
end Arbiter;

architecture Behavioral of Arbiter is
--signal data_out : STD_LOGIC_VECTOR (4 downto 0);
type QWSTATES is (IDLE, PACKET_IN, LAST);
signal q1p, q2p, q3p, q4p, q1n, q2n, q3n, q4n :  QWSTATES := IDLE;
signal wr_en1, rd_en1, wr_en2, rd_en2, wr_en3, rd_en3, wr_en4, rd_en4 : STD_LOGIC := '0';
signal empty1, empty2, empty3, empty4 : STD_LOGIC;
signal dout1, dout2, dout3, dout4 : STD_LOGIC_VECTOR(4 downto 0);
COMPONENT fifoQ
  PORT (
    rst : IN STD_LOGIC;
    wr_clk : IN STD_LOGIC;
    rd_clk : IN STD_LOGIC;
    din : IN STD_LOGIC_VECTOR(4 DOWNTO 0);
    wr_en : IN STD_LOGIC;
    rd_en : IN STD_LOGIC;
    dout : OUT STD_LOGIC_VECTOR(4 DOWNTO 0);
    full : OUT STD_LOGIC;
    empty : OUT STD_LOGIC;
    prog_full : OUT STD_LOGIC
  );
END COMPONENT;

type QRSTATES is (EMPTY, IDLE_S, PACKET_OUT, ACK);
signal p_arbit, n_arbit : QRSTATES;
signal n_grant : STD_LOGIC_VECTOR(3 downto 0):="0000";
signal n_data_out : STD_LOGIC_VECTOR(4 downto 0);
signal douts : STD_LOGIC_VECTOR(3 downto 0);
begin
q1 : fifoQ
  PORT MAP (
    rst => rst,
    wr_clk => clk,
    rd_clk => clk,
    din => din1,
    wr_en => wr_en1,
    rd_en => rd_en1,
    dout => dout1,
    full => fullv(0),
    empty => empty1,
    prog_full => prog_fullv(0)
  );
q2 : fifoQ
  PORT MAP (
    rst => rst,
    wr_clk => clk,
    rd_clk => clk,
    din => din2,
    wr_en => wr_en2,
    rd_en => rd_en2,
    dout => dout2,
    full => fullv(1),
    empty => empty2,
    prog_full => prog_fullv(1)
  );
q3 : fifoQ
  PORT MAP (
    rst => rst,
    wr_clk => clk,
    rd_clk => clk,
    din => din3,
    wr_en => wr_en3,
    rd_en => rd_en3,
    dout => dout3,
    full => fullv(2),
    empty => empty3,
    prog_full => prog_fullv(2)
  );
q4 : fifoQ
  PORT MAP (
    rst => rst,
    wr_clk => clk,
    rd_clk => clk,
    din => din4,
    wr_en => wr_en4,
    rd_en => rd_en4,
    dout => dout4,
    full => fullv(3),
    empty => empty4,
    prog_full => prog_fullv(3)
  );

q_seq : process(clk)
begin
if (clk'event and clk = '1') then
	q1p <= q1n;
	q2p <= q2n;
	q3p <= q3n;
	q4p <= q4n;
	
	if ((q1n = PACKET_IN) or (q1n = LAST)) then
		wr_en1 <= '1';
	else
		wr_en1 <= '0';
	end if;
	
	if ((q2n = PACKET_IN) or (q2n = LAST)) then
		wr_en2 <= '1';
	else
		wr_en2 <= '0';
	end if;
	
	if ((q3n = PACKET_IN) or (q3n = LAST)) then
		wr_en3 <= '1';
	else
		wr_en3 <= '0';
	end if;
	
	if ((q4n = PACKET_IN) or (q4n = LAST)) then
		wr_en4 <= '1';
	else
		wr_en4 <= '0';
	end if;
	
end if;
end process;

q1_comb : process(din1, q1p)
begin
	case q1p is
		when IDLE =>
			if din1(4) = '1' then
				q1n <= PACKET_IN;
			else
				q1n <= IDLE;
			end if;
		when PACKET_IN =>
			if din1(4) = '0' then
				q1n <= LAST;
			else
				q1n <= PACKET_IN;
			end if;
		when others =>
			if din1(4) = '1' then
				q1n <= PACKET_IN;
			else
				q1n <= IDLE;
			end if;
	end case;
end process;

q2_comb : process(din2, q2p)
begin
	case q2p is
		when IDLE =>
			if din2(4) = '1' then
				q2n <= PACKET_IN;
			else
				q2n <= IDLE;
			end if;
		when PACKET_IN =>
			if din2(4) = '0' then
				q2n <= LAST;
			else
				q2n <= PACKET_IN;
			end if;
		when others =>
			if din2(4) = '1' then
				q2n <= PACKET_IN;
			else
				q2n <= IDLE;
			end if;
	end case;
end process;

q3_comb : process(din3, q3p)
begin
	case q3p is
		when IDLE =>
			if din3(4) = '1' then
				q3n <= PACKET_IN;
			else
				q3n <= IDLE;
			end if;
		when PACKET_IN =>
			if din3(4) = '0' then
				q3n <= LAST;
			else
				q3n <= PACKET_IN;
			end if;
		when others =>
			if din3(4) = '1' then
				q3n <= PACKET_IN;
			else
				q3n <= IDLE;
			end if;
	end case;
end process;

q4_comb : process(din4, q4p)
begin
	case q4p is
		when IDLE =>
			if din4(4) = '1' then
				q4n <= PACKET_IN;
			else
				q4n <= IDLE;
			end if;
		when PACKET_IN =>
			if din4(4) = '0' then
				q4n <= LAST;
			else
				q4n <= PACKET_IN;
			end if;
		when others =>
			if din4(4) = '1' then
				q4n <= PACKET_IN;
			else
				q4n <= IDLE;
			end if;
	end case;
end process;

rd_en1 <= grant(0);
rd_en2 <= grant(1);
rd_en3 <= grant(2);
rd_en4 <= grant(3);

data1: process(grant, dout1, dout2, doutt3, dout4)
begin
	case grant is
		when "0000" =>
			data_out <= "00000";
		when "0001" =>
			data_out <= dout1;
		when "0010" =>
			data_out <= dout2;
		when "0100" =>
			data_out <= dout3;
		when others =>
			data_out <= dout4;
	end case;
end process;

arbit_seq : process(clk)
begin
	if (clk'event and clk = '1') then
		grant <= n_grant;
		p_arbit <= n_arbit;
		
--		case n_grant is
--			when "0000" =>
--				data_out <= "00000";
--			when "0001" =>
--				data_out <= dout1;
--			when "0010" =>
--				data_out <= dout2;
--			when "0100" =>
--				data_out <= dout3;
--			when others =>
--				data_out <= dout4;
--		end case;
	end if;
end process;
--douts <= (dout4(4) & dout3(4) & dout2(4) & dout1(4));
douts <= (not(empty4) & not(empty3) & not(empty2) & not(empty1));

arbit_comb : process(grant, p_arbit, douts, data_out)
begin
	case p_arbit is
		when EMPTY =>
		if (douts = "0000") then
			n_arbit <= EMPTY;
			n_grant <= "0000";
		elsif douts(0) = '1' then
			n_grant <= "0001";
			n_arbit <= IDLE_S;
		elsif douts(1) = '1' then
			n_grant <= "0010";
			n_arbit <= IDLE_S;
		elsif douts(2) = '1' then
			n_grant <= "0100";
			n_arbit <= IDLE_S;
		else
			n_grant <= "1000";
			n_arbit <= IDLE_S;
		end if;
		
		when IDLE_S =>
			n_arbit <= PACKET_OUT;
			n_grant <= grant;
		
		when PACKET_OUT =>
			n_grant <= grant;
			if data_out(4) = '0' then
				n_arbit <= ACK;
--				n_grant <= grant;
			else
				n_arbit <= PACKET_OUT;
--				n_grant <= grant;
			end if;
		when others =>
			case grant is
				when "0001" =>
					if (douts(1) = '1') then
						n_grant <= "0010";
						n_arbit <= IDLE_S;
					elsif (douts(2) = '1') then
						n_grant <= "0100";
						n_arbit <= IDLE_S;
					elsif (douts(3) = '1') then
						n_grant <= "1000";
						n_arbit <= IDLE_S;
					else
						n_grant <= "0000";
						n_arbit <= EMPTY;
					end if;
				when "0010" =>
					if (douts(2) = '1') then
						n_grant <= "0100";
						n_arbit <= IDLE_S;
					elsif (douts(3) = '1') then
						n_grant <= "1000";
						n_arbit <= IDLE_S;
					elsif (douts(0) = '1') then
						n_grant <= "0001";
						n_arbit <= IDLE_S;
					else
						n_grant <= "0000";
						n_arbit <= EMPTY;
					end if;
				when "0100" =>
					if (douts(3) = '1') then
						n_grant <= "1000";
						n_arbit <= IDLE_S;
					elsif (douts(0) = '1') then
						n_grant <= "0001";
						n_arbit <= IDLE_S;
					elsif (douts(1) = '1') then
						n_grant <= "0010";
						n_arbit <= IDLE_S;
					else
						n_grant <= "0000";
						n_arbit <= EMPTY;
					end if;
				when others =>
					if (douts(0) = '1') then
						n_grant <= "0001";
						n_arbit <= IDLE_S;
					elsif (douts(1) = '1') then
						n_grant <= "0010";
						n_arbit <= IDLE_S;
					elsif (douts(2) = '1') then
						n_grant <= "0100";
						n_arbit <= IDLE_S;
					else
						n_grant <= "0000";
						n_arbit <= EMPTY;
					end if;
			end case;
		end case;			
end process;
end Behavioral;

