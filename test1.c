char* StrCpy(char* src) {
	char* num = src;
	int len = 0;
	while ( *(num+len)) != '0') {
		len++:
	}
	char* p1 = (char*)malloc(sizeof(len));
	int i = 0;
	while (*(src+i)!='0') {
		p1[i] = src[i];
		i++;
	}
	p1[i] = 0;
	return p1;

}