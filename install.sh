echo "Installing ";
autoreconf --verbose --install --force;
/bin/bash /configure
make
echo "End. Done";
