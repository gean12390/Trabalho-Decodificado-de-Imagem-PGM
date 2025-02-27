# Trabalho-Decodificado-de-Imagem-PGM

<p>
  Grupo Composto por:
  <br><br>
  <strong>
  • Giovanni Pascuotte da Silva
    <br>
  • Eduardo de Oliveira Castellani
    <br>
  • Matheus Felipe Pirondi
    <br>
  • João Pedro de Almeida e Silva
    <br>
  </strong>
</p>
<hr>
<p><strong>i.</strong> Introdução ao problema e a importância do filtro de mediana
O filtro de mediana é essencial no processamento de imagens, especialmente para reduzir o ruído, sem prejudicar as bordas da imagem. Ele é eficaz na preservação de detalhes enquanto remove distorções, sendo amplamente utilizado em áreas como visão computacional e imagens médicas.

<strong>ii.</strong>  Funcionamento do filtro de mediana e implementação no código
O filtro de mediana aplica uma janela deslizante sobre a imagem, onde a mediana dos pixels ao redor do pixel central é calculada e atribuída a ele. No código, o filtro percorre os pixels, organiza os valores na janela e atribui a mediana ao pixel central. O código utiliza ordenação por bolha (ineficiente para grandes imagens) para calcular a mediana.

<strong>iii.</strong>  Exemplos de uso e resultados
A aplicação do filtro de mediana em uma imagem com ruído resulta na suavização do ruído, mantendo as bordas da imagem nítidas. Por exemplo, em uma imagem com valores extremos (ruído), o filtro substitui os valores distorcidos pela mediana dos pixels vizinhos, gerando uma imagem mais limpa.

<strong>iv.</strong>  Desafios e soluções
Os principais desafios foram a ineficiência da ordenação por bolha, que pode ser substituída por métodos mais rápidos, como QuickSort, e o tratamento das bordas da imagem, que foi resolvido ignorando os pixels de borda. Além disso, o gerenciamento de memória foi feito corretamente, evitando vazamentos.</p>
