int main() {
    typeof(int) a;
#if __STDC_VERSION__ == 201710L
    return 0;
#else
    return 1;
#endif
}
