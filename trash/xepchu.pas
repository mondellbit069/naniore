var s:string;
    n,i,m,p,j,l:longint;
begin
  assign(input,'xepchu.inp');reset(input);
  assign(output,'xepchu.out');rewrite(output);
   read(n);
     readln(s);
      p:= length(s);
       i:=1;
        while i<n do
          begin
            j:=i+1;
             while j<=n do
               begin
                if s[i] = s[j] then
                  begin
                   l:=l+1;
                    writeln(s[i],l);
                    n:=n-1;
                   end
                    else j:=j+1;
                  end;
                i:=i+1;
            end;
        end.
