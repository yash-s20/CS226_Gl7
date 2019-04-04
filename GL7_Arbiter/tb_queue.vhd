--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:36:46 04/04/2019
-- Design Name:   
-- Module Name:   /home/ansh/Desktop/Academics/Semester 4/CS 254/CS226_Gl7/GL7_Arbiter/tb_queue.vhd
-- Project Name:  GL7_Arbiter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fifo
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
 
ENTITY tb_queue IS
END tb_queue;
 
ARCHITECTURE behavior OF tb_queue IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fifo
    PORT(
         rst : IN  std_logic;
         wr_clk : IN  std_logic;
         rd_clk : IN  std_logic;
         din : IN  std_logic_vector(4 downto 0);
         wr_en : IN  std_logic;
         rd_en : IN  std_logic;
         dout : OUT  std_logic_vector(4 downto 0);
         full : OUT  std_logic;
         empty : OUT  std_logic;
         prog_full : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal wr_clk : std_logic := '0';
   signal rd_clk : std_logic := '0';
   signal din : std_logic_vector(4 downto 0) := (others => '0');
   signal wr_en : std_logic := '0';
   signal rd_en : std_logic := '0';

 	--Outputs
   signal dout : std_logic_vector(4 downto 0);
   signal full : std_logic;
   signal empty : std_logic;
   signal prog_full : std_logic;

   -- Clock period definitions
   constant wr_clk_period : time := 10 ns;
   constant rd_clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fifo PORT MAP (
          rst => rst,
          wr_clk => wr_clk,
          rd_clk => rd_clk,
          din => din,
          wr_en => wr_en,
          rd_en => rd_en,
          dout => dout,
          full => full,
          empty => empty,
          prog_full => prog_full
        );

   -- Clock process definitions
   wr_clk_process :process
   begin
		wr_clk <= '0';
		wait for wr_clk_period/2;
		wr_clk <= '1';
		wait for wr_clk_period/2;
   end process;
 
   rd_clk_process :process
   begin
		rd_clk <= '0';
		wait for rd_clk_period/2;
		rd_clk <= '1';
		wait for rd_clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;
		wr_en <= '1';
		din<="00010";
		rd_en <= '0';
      wait for wr_clk_period;
		din<="10010";
      wait for wr_clk_period;
--		wr_en <= '1';
		din<="10010";
      wait for wr_clk_period;
		wr_en<='0';
		din<="10010";
      wait for 4*wr_clk_period;
		rd_en <= '1';
		din<="11111";
		wait for wr_clk_period;
		wr_en <= '0';
		rd_en <='0';
		wait for wr_clk_period;
		rd_en <= '1';
      wait;
   end process;

END;
