--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:37:50 04/03/2019
-- Design Name:   
-- Module Name:   /home/ansh/Desktop/Academics/Semester 4/CS 254/Arbiter/GL7/tb_Arbiter.vhd
-- Project Name:  GL7
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Arbiter
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_Arbiter IS
END tb_Arbiter;
 
ARCHITECTURE behavior OF tb_Arbiter IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Arbiter
    PORT(
         clk : IN  std_logic;
         din1 : IN  std_logic_vector(4 downto 0);
         din2 : IN  std_logic_vector(4 downto 0);
         din3 : IN  std_logic_vector(4 downto 0);
         din4 : IN  std_logic_vector(4 downto 0);
         grant : INOUT  std_logic_vector(3 downto 0);
         prog_fullv : OUT  std_logic_vector(3 downto 0);
         fullv : OUT  std_logic_vector(3 downto 0);
         data_out : INOUT  std_logic_vector(4 downto 0);
         rst : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal din1 : std_logic_vector(4 downto 0) := (others => '0');
   signal din2 : std_logic_vector(4 downto 0) := (others => '0');
   signal din3 : std_logic_vector(4 downto 0) := (others => '0');
   signal din4 : std_logic_vector(4 downto 0) := (others => '0');
   signal rst : std_logic := '0';

	--BiDirs
   signal grant : std_logic_vector(3 downto 0);

 	--Outputs
   signal prog_fullv : std_logic_vector(3 downto 0);
   signal fullv : std_logic_vector(3 downto 0);
   signal data_out : std_logic_vector(4 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Arbiter PORT MAP (
          clk => clk,
          din1 => din1,
          din2 => din2,
          din3 => din3,
          din4 => din4,
          grant => grant,
          prog_fullv => prog_fullv,
          fullv => fullv,
          data_out => data_out,
          rst => rst
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		din1<="00000"; -- 1
		din2<="00000";
		din3<="00000";
		din4<="00000";
		rst <= '0';
      wait for clk_period;
		din1<="10010"; -- 2
		din2<="00000";
		din3<="10010";
		din4<="00000";
		rst <= '0';
      wait for clk_period;
		din1<="10100";
		din2<="00000";
		din3<="10001";
		din4<="00000";
		rst <= '0';
      wait for clk_period;
		din1<="10110";
		din2<="00000";
		din3<="01010";
		din4<="00000";
		rst <= '0';
      wait for clk_period;
		din1<="11000";
		din2<="10010";
		din3<="00000";
		din4<="00000";
		rst <= '0';
      wait for clk_period;
		din1<="11110";
		din2<="10000";
		din3<="00000";
		din4<="10010";
		rst <= '0';
      wait for clk_period;
		din1<="00110";
		din2<="10000";
		din3<="00000";
		din4<="11000";
		rst <= '0';
      wait for clk_period;
		din1<="00000";
		din2<="00000";
		din3<="00000";
		din4<="00000";
		rst <= '0';
      wait for clk_period;
		din1<="00000";
		din2<="00000";
		din3<="00000";
		din4<="00000";
		rst <= '0';
--      wait for clk_period;
--		din1<="00000";
--		din2<="00000";
--		din3<="00000";
--		din4<="00000";
--		rst <= '0';
--      wait for clk_period;
--		din1<="00000";
--		din2<="00000";
--		din3<="00000";
--		din4<="00000";
--		rst <= '0';
--      wait for clk_period;



      -- insert stimulus here 

      wait;
   end process;

END;