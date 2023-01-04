Const f1='gt.inp';
            fo= 'gt.out';
var      n: integer;
            f: array[0..30] of  qword;
procedure  giaithua;
var   i: integer;
begin
          f[0]:= 1;

for i:= 1 to n do f[i]:= f[i-1]*I;
end;
BEGIN
     Assign(input, f1); reset(input);
     Assign(output,fo); rewrite(output);
      Readln(n);
     giaithua;
     writeln(f[n]);
    close(input); close(output);

END.

