var n,i,m:integer;
  begin
    assign(input,'prime.inp');reset(input);
    assign(output,'prime.out');rewrite(output);
    read(n);
     i:=2;
        while n > 1 do
           begin
             if n mod i = 0 then
                begin
                   write(i,#32);
                   n:=n div i;
                end
             else i:=i+1;
             end;
           end.
