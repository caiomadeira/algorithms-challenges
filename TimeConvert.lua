seg = io.read("*n")

d = seg // 86400
h = (seg % 86400) // 3600
m = (seg - (d*86400) - (h*3600))//60
s = (seg - (d*86400) - (h*3600) - (m*60))%60
print(d.." dias "..h.." horas "..m.." minutos "..s.." segundos ")