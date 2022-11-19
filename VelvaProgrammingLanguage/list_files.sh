export VELVA_FILE_LIST=$(find src -name \*.cpp -print | xargs -I {} printf {}\;)
echo $VELVA_FILE_LIST