# Rush02
Algoritmo
1. checar os argumentos recebidos.
	1.1 se o número de argumentos (argc) for maior que três
	ou for igual a 1;
		- exibir mensagem de erro "Error\n";
	1.2 Checar se é um inteiro positivo e válido (fazer função similar ao atoi)
		- se não for retornar "Error\n"
	1.3 checar tamanho do argumento para saber com qual tipo usar (int, long, long long)
2. Se receber um argumento
	2.1 Retornar o valor em extenso
3. Se receber dois argumentos
	3.1 o primeiro será o novo dicionário de referência
	3.2 o segundo será o valor que vai ser convertido com base no novo dict 
	3.3. voltar a fazer 1.2 e 1.3 para o segundo argumento
4. COMO CONVERTER O VALOR EM EXTENSO
	4.1 pegar o valor e converter em int (função ft_atoi)
	4.2 possíveis valores convertidos pro dict (nb <= 20, nb > 20 e nb < 100,
	 nb >= 100 and nb <= 1000...
	  (opcional) Em números grandes, a palavra "and" só é usada
	  entre a centena e a parte restante do número (dezenas e unidades).
	4.2 abrir o arquivo do dicionário e procurar
