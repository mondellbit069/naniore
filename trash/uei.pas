uses crt;
 var t:real;
     i:integer;
 begin
 clrscr;
  t:=0; i:=1;
  while i<=100 do
   begin
     t:=t+1/i;
     i:=i+1;
   end;
   writeln(t:5:4);
    readln
  end.