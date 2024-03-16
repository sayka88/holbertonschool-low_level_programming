undefined8 main(int argc, char **argv)
{
	undefined8 uVar1;
	int64_t iVar2;
	char **var_28h;
	uint64_t var_1ch;
	uint64_t var_10h;
	
	if (argc == 2) {
		iVar2 = checksum((char **)argv[1]);
		if (iVar2 == 0xad4) {
			puts("\a\a\aTada! Congrats");
			uVar1 = 0;
		} else {
			puts("Wrong password");
			uVar1 = 1;
		}
	} else {
		printf("Usage: %s password\n", *argv);
		uVar1 = 1;
	}
	return uVar1;
}
