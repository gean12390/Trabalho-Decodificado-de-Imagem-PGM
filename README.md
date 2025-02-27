# Trabalho-Decodificado-de-Imagem-PGM
  <hr>
  Materia: Algoritmos e Estruturas de Dados III
  <br>
  Professor: Buno Monserrat Perillo
  <hr>
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
<p><strong>i.</strong> O filtro de mediana é essencial no processamento de imagens, especialmente para reduzir o ruído, sem prejudicar as bordas da imagem. Ele é eficaz na preservação de detalhes enquanto remove distorções, sendo amplamente utilizado em áreas como visão computacional e imagens médicas.

<strong>ii.</strong>  O filtro de mediana aplica uma janela deslizante sobre a imagem, onde a mediana dos pixels ao redor do pixel central é calculada e atribuída a ele. No código, o filtro percorre os pixels, organiza os valores na janela e atribui a mediana ao pixel central. O código utiliza ordenação por bolha (ineficiente para grandes imagens) para calcular a mediana.

<strong>iii.</strong>  A aplicação do filtro de mediana em uma imagem com ruído resulta na suavização do ruído, mantendo as bordas da imagem nítidas. Por exemplo, em uma imagem com valores extremos (ruído), o filtro substitui os valores distorcidos pela mediana dos pixels vizinhos, gerando uma imagem mais limpa.

<strong>iv.</strong> Os principais desafios foram a mudança da linguagem Java para a linguagem C, que envolveu o uso de ponteiros e conceitos que ainda não tínhamos aprendido, como a implementação do filtro de mediana. Outro desafio foi trabalhar com arquivos PGM, pois não estávamos acostumados com esse formato. Além disso, enfrentamos dificuldades ao tentar abrir, editar e salvar os arquivos, pois não sabíamos como realizar corretamente a manipulação de arquivos.</p>
