var n,m,i:longint;
 a:array[1..1000] of longint;
  p:array[1..1000] of boolean;
begin
  assign(input,'tiamang.inp');reset(input);
  assign(output,'tiamang.out');rewrite(output);
  read(n);
    for i := 1 to n do read(a[i]);
    for i:= 1 to n do p[i]:= false;
      for i:= 1 to n-1 do
        if p[i]=false then
          for m:= i+1 to n do
            if a[m]= a[i] then p[m]:= true;
          for  i:=1 to n do
          if p[i]=false then write(a[i],#32);
      end.
