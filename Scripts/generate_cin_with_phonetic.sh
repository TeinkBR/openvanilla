#!/usr/bin/env bash
set -euo pipefail
SRC="DataTables/pinyinbig5.cin"
DST="DataTables/TableBased/pinyinbig5_withphonetic.cin"
mkdir -p "$(dirname "$DST")"
# Keep header lines (start with %) untouched; append key to mapped value lines that contain a tab
awk -F'\t' '{
  if ($0 ~ /^%/ || NF<2) { print $0; next; }
  key=$1; val=$2;
  # if value already contains the key, skip duplicate append
  if (index(val, key)) { print $0; next; }
  printf "%s\t%s %s\n", key, val, key;
}' "$SRC" > "$DST"
echo "Created $DST"
