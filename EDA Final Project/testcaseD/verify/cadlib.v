
module gate1(s0, s1, i0, i1, i2, i3, o);
input
  s0,
  s1,
  i0,
  i1,
  i2,
  i3;
output
  o;

assign
  o = ~(( s0 & s1  & i3) | (s0 & ~s1 & i2) | (~s0 & s1  & i1 ) | (~s0 & ~s1 & i0));

endmodule


module gate2(s0, s1, s2, s3, i0, i1, i2, i3, o);
input
  s0,
  s1,
  s2,
  s3,
  i0,
  i1,
  i2,
  i3;
output
  o;

assign
  o = ~((( i0 & ~s0) | (i1 & s0) & ~(s2 | s3)) | (((i2 & ~s1) | (i3 & s1)) & (s2 | s3)));

endmodule


module gate3(i1, i2, i3, i4, i5, o);
input
  i1,
  i2,
  i3,
  i4,
  i5;
output
  o;

assign
  o = ~((i1 & (i2 | (i4 & i5))) | (i3 & (i4 | (i2 & i5))));
endmodule
