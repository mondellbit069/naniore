var p,s:integer;
    m,n,i,x,y:int64;
   begin
   assign(input,'tinhtong.inp');reset(input);
   assign(output,'tinhtong.out');rewrite(output);
   read(m,n);
   readln(x);
   readln(y);
    p:=x+y;
    s:=s+p;
      i:=1;
       while s div 10 <> 0 do
        begin
           i:=i+1;
           s:=s div 10;
        end;
        writeln(i);
        writeln(p);
      end.
