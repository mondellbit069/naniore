uses crt;
 var n,i,m:integer;
     a: array[1..100000] of integer;
 function KiemTra(x:integer):boolean;
	var t,e:integer;
		begin
			t:=0;
			for e:= 1 to (x mod 2) do
			if x mod e = 0 then t:=t+e;
		if t = x then KiemTra:=TRUE
		Else KiemTra:=False;
	end;
      begin
       assign(input,'perfect.inp');reset(input);
       assign(output,'perfect.out');rewrite(output);
       read(n);
       for i:= 1 to n do
        read(a[i]);

         if KiemTra(a[i]) then write(a[i]);
 end.

