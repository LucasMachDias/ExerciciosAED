//exercicio que não precisa programar será resolvido só com comentários

/*
codigo:
int i = 3, j = 5;
int *p, *q;
p = &i;
q = &j;
*/
/*
Usando as mesmas declarações do Exercício 1, indique o que acontece
com i, j, p e q após cada trecho (considere sempre o estado inicial p = &i; q = &j;):
a) *p = *q; = mesma coisa que dizer que "p = q", ou seja *p vira igual a *q, então i = 5, j = 5, p = &i, q = &j

b) p = q; = faz com que p aponte para onde q aponta, ou seja p passa a apontar para &j, então i = 3, j = 5, p = &j, q = &j

c) *p = *p + *q; = faz com que *p se torne o valor de *p +*q, ou seja 3+5 = 8, então i = 8, j = 5, p = &i, q = &j

d) q = &i; *q = 100; = faz com que q aponte para o endereço de i e após isso muda o valor de i para 100, então i = 100, j = 5, p = &i, q = &i
*/