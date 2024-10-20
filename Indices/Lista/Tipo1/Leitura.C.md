<div align="center">
<h1>Lista Duplamente Encadeada e Ordenada</h1>
</div>

<br>

Todas as referências e leituras sobre os tipos de listas estão neste livro: *Estruturas_de_Dados_-_Algoritmos_Anlise_de_Complexidade_em_Java_e_C_C_Ana_F*

👉🏻 Veja aqui o [Slide - PDF](https://drive.google.com/file/d/1-cDTGTDLXkDG4DqMpb6bblBi3eHkGAJm/view?usp=sharing)<br>

👾 Veja aqui o [Código em C](https://github.com/vannella/Aprendizagem/blob/main/Indices/Lista/Tipo1/main.c)<br>

---

<br>

<div align="center">
<h1>Estruturas de Dados: Tipos de Listas</h1>
</div>

As estruturas de dados são essenciais na computação para organizar e armazenar dados de maneira eficiente. As listas são um tipo fundamental de estrutura de dados, com várias variações que servem diferentes propósitos. A seguir, discutimos três tipos comuns de listas e suas características:

<br>

### 1. **Lista Simplesmente Encadeada:**<br>
**Descrição:** Uma série de nós, onde cada nó contém um valor e um ponteiro para o próximo nó. Não há ponteiros para o nó anterior.<br>
**Vantagens:** Inserir e remover elementos é rápido (se você souber onde está o nó anterior), e a lista pode crescer ou encolher conforme necessário.<br>
**Desvantagens:** Para encontrar um elemento, é necessário percorrer a lista desde o início, já que não há acesso direto por índice.<br>

~~~ C
struct No {
    int num;
    struct No* prox;
};
~~~~

<br>

### 2. **Lista Duplamente Encadeada e Ordenada:**<br>
**Descrição:** Cada nó tem ponteiros para o próximo e para o nó anterior, e os elementos são mantidos em ordem.<br>
**Vantagens:** Pode ser percorrida em ambas as direções (frente e verso), e é fácil inserir e remover elementos em qualquer posição se você souber onde está o nó.<br>
**Desvantagens:** Usa mais memória devido aos ponteiros extras.<br>

~~~ C
struct No {
    int num;
    struct No* prox;
    struct No* ant;
};
~~~~

<br>

### 3. **Lista Circular:**<br>
**Descrição:** Similar à lista encadeada, mas o último nó aponta para o primeiro nó, formando um ciclo.<br>
**Vantagens:** Permite percorrer a lista continuamente sem precisar parar, o que é útil para estruturas cíclicas.<br>
**Desvantagens:** Pode ser mais complicada de implementar, e há risco de loops infinitos se não for manipulada corretamente.<br>

~~~ C
struct No {
    int num;
    struct No* prox;
    struct No* ant;
};

// Exemplo de inicialização circular
struct No* primeiro = (struct No*)malloc(sizeof(struct No));
struct No* segundo = (struct No*)malloc(sizeof(struct No));

primeiro->num = 1;
segundo->num = 2;

primeiro->prox = segundo;
primeiro->ant = segundo;

segundo->prox = primeiro;
segundo->ant = primeiro;

~~~~


---

<br>

### 🎵 **Aplicações em Plataformas como Spotify**<br>
Entender esses tipos de listas é crucial para desenvolver plataformas como o Spotify:<br>

**Playlists:** Usam listas duplamente encadeadas para facilitar a adição, remoção e reordenação de músicas.<br>
**Histórico de Reproduções:** Utilizam listas duplamente encadeadas para permitir a navegação eficiente para frente e para trás.<br>
**Modo de Repetição:** Implementado com listas circulares para repetir a lista de músicas continuamente.<br>

<br>


<div align="center">
<h5>Feito por Vana💜</h5>
 <a href="https://github.com/Vannella">
      <img src="https://img.shields.io/badge/GitHub-000000?style=for-the-badge&logo=github&logoColor=purple" alt="GitHub">
   </a>
   
   <a href="https://giovanavannela@gmail.com">
      <img src="https://img.shields.io/badge/Gmail-000000?style=for-the-badge&logo=gmail&logoColor=purple" alt="email"/><br>
   </a>
</div>

