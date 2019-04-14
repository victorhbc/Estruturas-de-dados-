typedef struct ponto Ponto;

Ponto* criarPonto(float x, float y);
void liberarPonto(Ponto *p);
void acessarPonto(Ponto *p, float *x, float *y);
void atribuirValores(Ponto *p, float x, float y);
float distancia(Ponto *p1, Ponto *p2);