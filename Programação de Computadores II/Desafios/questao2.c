/*Na alocação de uma matriz bidimensional a de números float, 
diga se a afirmativa é verdadeira ou falsa, se for verdadeira, 
justifique e se for falsa, corrija e explique o porquê. 

1. a alocação do vetor linha ocorre com: a = (float**) malloc(numLinhas*sizeof(float*))
2. A alocação do elemento i do vetor linha ocorre com: a[i] = (float*) malloc(numColunas*sizeof(float)); 
3.A tentativa de alocação pode dar errado e ser capturada po if (a == NULL) 
4. O acesso ao elemento linha, coluna é feito com a[linha][coluna] 
5. As afirmativas anteriores estão corretas

A alocação do vetor linha ocorre com: a = (float**) malloc(numLinhas*sizeof(float*))
Verdadeiro. Justificativa: Essa linha de código aloca memória para um vetor de ponteiros de float, 
onde cada ponteiro pode apontar para uma linha da matriz. Portanto, a declaração é correta.

2. A alocação do elemento i do vetor linha ocorre com: a[i] = (float*) malloc(numColunas*sizeof(float));
Verdadeiro. Justificativa: Essa linha de código aloca memória para uma linha de numColunas elementos float. 
Portanto, a declaração é correta.

3. A tentativa de alocação pode dar errado e ser capturada por if (a == NULL)
Verdadeiro. Justificativa: Se a alocação falhar, malloc retorna NULL. 
Verificar se a é NULL permite capturar falhas na alocação de memória. 
Isso é uma prática recomendada para evitar desreferenciamento de ponteiros nulos.

4. O acesso ao elemento linha, coluna é feito com a[linha][coluna]
Verdadeiro. Justificativa: Depois de alocar memória para a matriz bidimensional, 
o acesso a elementos individuais é feito usando a notação a[linha][coluna]. 
Cada a[linha] é um ponteiro para uma linha, e a[linha][coluna] acessa o elemento da coluna específica nessa linha.

5. As afirmativas anteriores estão corretas
Verdadeiro. Justificativa: Todas as afirmações sobre a alocação de memória para uma matriz bidimensional 
de números float estão corretas. Elas abrangem a alocação da estrutura de linhas, 
a alocação de cada linha, a verificação de falhas na alocação e o acesso aos elementos da matriz.*/



