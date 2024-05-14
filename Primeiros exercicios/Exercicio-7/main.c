#include <stdio.h>
#include <math.h>

struct Vetor2D {
    double x;
    double y;
};

double produtoEscalar(struct Vetor2D v1, struct Vetor2D v2) {
    return v1.x * v2.x + v1.y * v2.y;
}

double magnitude(struct Vetor2D v) {
    return sqrt(v.x * v.x + v.y * v.y);
}

double anguloEntreVetores(struct Vetor2D v1, struct Vetor2D v2) {
    double escalar = produtoEscalar(v1, v2);
    double magnitude1 = magnitude(v1);
    double magnitude2 = magnitude(v2);
    
    double cos_theta = escalar / (magnitude1 * magnitude2);
    
    double angulo = acos(cos_theta) * (180.0 / M_PI);
    
    return angulo;
}

double produtoVetorial(struct Vetor2D v1, struct Vetor2D v2) {
    return v1.x * v2.y - v1.y * v2.x;
}

int main() {
    struct Vetor2D vetor1, vetor2;
    
    printf("Digite as coordenadas do primeiro vetor (x y): ");
    scanf("%lf %lf", &vetor1.x, &vetor1.y);
    
    printf("Digite as coordenadas do segundo vetor (x y): ");
    scanf("%lf %lf", &vetor2.x, &vetor2.y);
    
    double escalar = produtoEscalar(vetor1, vetor2);
    printf("Produto Escalar: %.2lf\n", escalar);
    
    double angulo = anguloEntreVetores(vetor1, vetor2);
    printf("Ângulo entre os vetores: %.2lf graus\n", angulo);
    
    double produto_vetorial = produtoVetorial(vetor1, vetor2);
    printf("Produto Vetorial: %.2lf\n", produto_vetorial);
    
    return 0;
}
