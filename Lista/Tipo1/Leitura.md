## Lista Duplamente Encadeada e Ordenada

Todas as referências e leituras sobre os tipos de listas estão neste livro: *Estruturas_de_Dados_-_Algoritmos_Anlise_de_Complexidade_em_Java_e_C_C_Ana_F*

Veja aqui o [Slide - PDF](https://drive.google.com/file/d/13MPjl0GeVP3AaXBosU6h6-Of49bBiw2t/view?usp=sharing)

---

# Estruturas de Dados: Tipos de Listas<br>

As estruturas de dados são essenciais na computação para organizar e armazenar dados de maneira eficiente. As listas são um tipo fundamental de estrutura de dados, com várias variações que servem diferentes propósitos. A seguir, discutimos três tipos comuns de listas e suas características:

### 1. **Lista Simplesmente Encadeada:**<br>
**Descrição:** Uma série de nós, onde cada nó contém um valor e um ponteiro para o próximo nó. Não há ponteiros para o nó anterior.<br>
**Vantagens:** Inserir e remover elementos é rápido (se você souber onde está o nó anterior), e a lista pode crescer ou encolher conforme necessário.<br>
**Desvantagens:** Para encontrar um elemento, é necessário percorrer a lista desde o início, já que não há acesso direto por índice.<br>

~~~ C
struct lista {
    int num;
    struct Node* prox;
};
~~~~

### 2. **Lista Duplamente Encadeada e Ordenada:**<br>
**Descrição:** Cada nó tem ponteiros para o próximo e para o nó anterior, e os elementos são mantidos em ordem.<br>
**Vantagens:** Pode ser percorrida em ambas as direções (frente e verso), e é fácil inserir e remover elementos em qualquer posição se você souber onde está o nó.<br>
**Desvantagens:** Usa mais memória devido aos ponteiros extras.<br>

~~~ C
struct lista {
    int num;
    struct Node* prox;
    struct Node* ant;
};
~~~~

### 3. **Lista Circular:**<br>
**Descrição:** Similar à lista encadeada, mas o último nó aponta para o primeiro nó, formando um ciclo.<br>
**Vantagens:** Permite percorrer a lista continuamente sem precisar parar, o que é útil para estruturas cíclicas.<br>
**Desvantagens:** Pode ser mais complicada de implementar, e há risco de loops infinitos se não for manipulada corretamente.<br>

~~~ C
struct lista {
    int num;
    struct lista* prox;
};

// Na inicialização, garantir que o último nó aponte para o primeiro

~~~~


---

### 🎵 **Aplicações em Plataformas como Spotify**<br>
Entender esses tipos de listas é crucial para desenvolver plataformas como o Spotify:<br>

**Playlists:** Usam listas duplamente encadeadas para facilitar a adição, remoção e reordenação de músicas.<br>
**Histórico de Reproduções:** Utilizam listas duplamente encadeadas para permitir a navegação eficiente para frente e para trás.<br>
**Modo de Repetição:** Implementado com listas circulares para repetir a lista de músicas continuamente.<br>

<br>

📝 Integrantes:<br>
* Giovana Fernanda
* Keila Jadiely
* Kaylane Sophia
* Miqueias Furtado
* Thiago André
* Tiago Da Silva
  
<br>

Autora: [Giovana Fernanda](https://github.com/GiovanaMerces)

