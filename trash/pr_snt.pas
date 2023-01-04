var n,m:longint;
function KTNT(n:longint):boolean
/
var i:longint;
begin
    if n < 2 then exit(false);
    if n < 4 then exit(true);
    if n mod 2 = 0 then exit(false);
    if n mod 3 = 0 then exit(false);
    i:=5;
    while i*i <= n do
        begin
            if n mod i = 0 then exit(false);
            if n mod (i+2) = 0 then exit(false);
            inc(i,6);
        end;
    exit(true);
end;

begin
   read(n);
    m:=n;
    write(n,'=');
      while m<>0 do
       begin
          if KTNT(n)= true then
            begin
              write(n);
              exit;
            end;
          n:=n-2;
       while KTNT(n) = false do dec(n);
        write(n,'+');
         m:=m-n; n:=m;
        end;
       end.

