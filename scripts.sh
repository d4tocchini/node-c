

install()
{
    echo install
}

build()
{
    # export MACOSX_DEPLOYMENT_TARGET="10.12"
    export MAKE="gmake"
    CC="node-gypcc --silent ${@}"
    SRC="./casm.c"
    LDFLAGS="-L${PREFIX}/lib -ltcc -lpthread"
    CFLAGS="-I${PREFIX}/include -I${PWD}"
    CFLAGS+=" -fPIC -O3 -std=c2x -pthread -Wno-incompatible-pointer-types"
    CFLAGS+=" -Wno-int-conversion -w -Wno-error=deprecated-declarations"
    CFLAGS+=" -mmacosx-version-min=10.12"
    CFLAGS=$CFLAGS $CC  $LDFLAGS $SRC -o ./build/casm.node
    # local cmd="$1"
    # shit;
    # case "$cmd" in
    #     "electron" | "e" )
    #         "_build_${cmd}" $@
    #     ;;
    #     * )
    #         echo build $cmd ":: UNRECOGNIZED"
    #     ;;
    # esac
}

test()
{
    echo testing...
}

bench()
{
    echo bench
}

_build_electron()
{


    # Electron's version.
    export npm_config_target=8.2.5
    # The architecture of Electron, see https://electronjs.org/docs/tutorial/support#supported-platforms
    # for supported architectures.
    export npm_config_arch=x64
    export npm_config_target_arch=x64
    # Download headers for Electron.
    export npm_config_disturl=https://electronjs.org/headers
    # Tell node-pre-gyp that we are building for Electron.
    export npm_config_runtime=electron
    # Tell node-pre-gyp to build module from source code.
    export npm_config_build_from_source=true
    # Install all dependencies, and store cache to ~/.electron-gyp.

    # cd node_modules/robotjs

    # HOME=~/.electron-gyp npm i
    HOME=~/.electron-gyp \
        node-gyp  --make="gmake" -jobs=max rebuild ;
}