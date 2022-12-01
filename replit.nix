{ pkgs }: {
	deps = [
		pkgs.unzip
  pkgs.wget
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
		pkgs.glibc.static
	];
}