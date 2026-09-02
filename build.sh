#!/bin/bash
# build.sh - compila y ejecuta pruebas.c desde WSL/Ubuntu
set -e
cd "$(dirname "$0")"
if ! command -v gcc >/dev/null 2>&1; then
  echo "gcc no encontrado. Instala build-essential: sudo apt install build-essential"
  exit 2
fi
gcc pruebas.c -o pruebas
./pruebas
