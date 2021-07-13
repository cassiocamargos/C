float somatoria(float v[], int n) {
    int i;
    float total = 0;
    for(i=0;i<n;i++) {
        total += v[i]; // total = total + numeros[i];
    }
    return total;
}
