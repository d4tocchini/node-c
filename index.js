
// // v8 opt: mutability overhead of obj >> proto
// function casm_ctor() {}
// const casm = casm_ctor.prototype;
const log = console.log;

log("casm ...")

const casm = require('./build/casm.node');

// anti soydev module export (fast, portable, not a bug)
global.casm = casm;

// const LITTLE_ENDIAN = os.endianness() === 'LE';
log("   module_init_count",casm.module_init_count)
log("... casm")