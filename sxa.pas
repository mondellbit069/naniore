var m,n,i,p,x,y:longint;
  a,b,c:array[1..1000] of longint;
begin
 assign(input,'sapxeparray.inp');reset(input);
 assign(output,'sapxeparray.out');rewrite(output);
 read(m,n);  p:=0;
   for i:=1 to n do readln(a[i]);
   for i:=n  to n+m do begin
          inc(p);
          read(b[p]);
   end;
      for i:= 1 to n do c[i]:=a[i];
      p:=n+1 ;
         for i:= 1 to m do
             begin
                c[p]:=b[i];
                   inc(p);
                end;
   for i:= 1 to m+n-1 do
      for x:= i+1 to m+n do if c[i]>c[x] then
           begin
              y:= c[i];
              c[i]:=c[x];
              c[x]:=y;
           end;
   for i:= 1 to m+n do writeln(c[i]);
   end.

