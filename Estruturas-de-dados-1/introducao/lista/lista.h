typedef struct lista Lista;

Lista* criatLista();
Lista* inserirNaLista(Lista *l, int i);
void imprimirLista(Lista *l);
Lista* buscar(Lista *l, int v);
Lista* remover(lista *l, int v);
void liberar(lista *l);
int comparar(lista *l1, lista *l2);