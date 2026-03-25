{ pkgs ? import <nixpkgs> { config.allowUnfree = true; } }:

pkgs.mkShell {
  name = "c-env";

  buildInputs = with pkgs; [
    # C++ Compiler & Build Tools
    clang # Note: CUDA often lags behind the latest GCC version
    gnumake
    cmake
    valgrind

  ];

  shellHook = ''
    export CC=clang
    export CXX=clang++
  '';
}
