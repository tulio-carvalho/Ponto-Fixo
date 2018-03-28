reset
plot "dados0.75.dat" w lp t"x0=0.75"
set title "Convergência cos(x)-x=0"
set xlabel "Número de interações"
set ylabel "x0"
set terminal png size 1024,768
set output "ptofixo1.png"
replot
set output "ptofixo2.png"
plot "dados1.5.dat" w lp t"x0=1.5"
