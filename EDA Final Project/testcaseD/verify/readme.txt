
1. Use cadence lec to check the logic equive
  a. edit lec.run
  b. change the golden filename (default: test1.v)
  c. change the revised filename (default: test1out.v) 
  d. save and quit
  e. run: lec -nogui lec.run

2. Use synopsys dc_shell to report area and timing
   a. edit report.run
   b. change the input verilog name (default: test1.v)
   c. change the top cell name (defautl: test1)
   d. save and quit
   e. run: dc_shell -f report.run
