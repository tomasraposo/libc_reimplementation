/* 
  peek at next byte in the input stream 
  and return it 
*/
int fpeek(FILE* fp) {
	int c = fgetc(fp);
	ungetc(c, fp);
	return c;
}
