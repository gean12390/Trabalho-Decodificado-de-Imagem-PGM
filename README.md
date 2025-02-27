# Trabalho-Decodificado-de-Imagem-PGM
  <hr>
  <strong>Materia</strong> : Algoritmos e Estruturas de Dados III
  <br>
  <strong>Professor</strong> : Buno Monserrat Perillo
  <hr>

<p><strong>i.</strong> O filtro de mediana é essencial no processamento de imagens, especialmente para reduzir o ruído, sem prejudicar as bordas da imagem. Ele é eficaz na preservação de detalhes enquanto remove distorções, sendo amplamente utilizado em áreas como visão computacional e imagens médicas.

<strong>ii.</strong>  O filtro de mediana aplica uma janela deslizante sobre a imagem, onde a mediana dos pixels ao redor do pixel central é calculada e atribuída a ele. No código, o filtro percorre os pixels, organiza os valores na janela e atribui a mediana ao pixel central. O código utiliza ordenação por bolha (ineficiente para grandes imagens) para calcular a mediana.

<strong>iii.</strong>  A aplicação do filtro de mediana em uma imagem com ruído resulta na suavização do ruído, mantendo as bordas da imagem nítidas. Por exemplo, em uma imagem com valores extremos (ruído), o filtro substitui os valores distorcidos pela mediana dos pixels vizinhos, gerando uma imagem mais limpa.

<strong>iv.</strong> Os principais desafios foram a mudança da linguagem Java para a linguagem C, que envolveu o uso de ponteiros e conceitos que ainda não tínhamos aprendido, como a implementação do filtro de mediana. Outro desafio foi trabalhar com arquivos PGM, pois não estávamos acostumados com esse formato. Além disso, enfrentamos dificuldades ao tentar abrir, editar e salvar os arquivos, pois não sabíamos como realizar corretamente a manipulação de arquivos.</p>

<hr>

  Grupo Composto por:

| [<img src="https://avatars.githubusercontent.com/u/100391366?v=4" width=115><br><sub>Giovanni Pascuotte da Silva</sub>](https://github.com/gean12390) | [<img src="https://avatars.githubusercontent.com/u/169916563?v=4" width=115><br><sub>Eduardo de Oliveira Castellani</sub>](https://github.com/Castellani21) | [<img src="https://avatars.githubusercontent.com/u/165100067?v=4" width=115><br><sub>Matheus Felipe Pirondi</sub>](https://github.com/mpirondi) | [<img src="https://avatars.githubusercontent.com/u/200692715?v=4" width=115><br><sub>João Pedro de Almeida e Silva</sub>](https://github.com/Jotaz11n) |
| :---: | :---: | :---: |:---: |
