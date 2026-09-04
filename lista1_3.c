//exercicio que não precisa programar será resolvido só com comentários

/*Exercício 3. Considere int v[5]; e int *p;. Classifique cada atribuição como legal ou ilegal e, quando for legal, explique o que ela representa.
a) p = v; -> Legal, faz com que p aponte para v[0]
b) p = &v; - Ilegal, essa bomba tá pegando todos os endereços de v, e não apenas o endereço de v[0]
c) p = &v[0]; -> Legal, faz a mesma coisa que p = v, mas de forma mais explícita, faz com que p aponte para v[0]
d) v = p; -> Ilegal, não da pra mudar o endereço de v, pois ele é um vetor, e não um ponteiro
e) p = v + 2; -> Legal, faz com que aponte para v[0] + 2, ou seja, v[2]
*/