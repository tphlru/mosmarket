/* Generated code for Python module 'zope$interface$interfaces'
 * created by Nuitka version 1.9.5
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_zope$interface$interfaces" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_zope$interface$interfaces;
PyDictObject *moduledict_zope$interface$interfaces;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[415];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[415];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("zope.interface.interfaces"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 415; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_zope$interface$interfaces(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 415; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_49517bcfc160cc63b029c7fab051cf23;
static PyCodeObject *codeobj_ea0f1c0bbafc4953fd9fe163fe42693a;
static PyCodeObject *codeobj_827c624b3550fff265f19b7e355280ec;
static PyCodeObject *codeobj_052996a314ed08171ddb6181cf3ba5c4;
static PyCodeObject *codeobj_ca246108a193c73d3d7a633444999689;
static PyCodeObject *codeobj_f78e9333d9a08fe1610642a108267930;
static PyCodeObject *codeobj_6c0c47698beb996d881bddd24982353d;
static PyCodeObject *codeobj_4076d56ca49b83a4ba0b54f19f8d82c7;
static PyCodeObject *codeobj_627758dd1158aacbad0b7a1fde720511;
static PyCodeObject *codeobj_a3d705b689d7abc012a8d6b1bdab8595;
static PyCodeObject *codeobj_efb42f7f6ff8664954adb3bedaaa682a;
static PyCodeObject *codeobj_136075989d8aec5d2437a34f0ab69c4f;
static PyCodeObject *codeobj_5d1cfa19d38fe760cabc775f079e298d;
static PyCodeObject *codeobj_0d1cf53515b818257c5ee3d754df121d;
static PyCodeObject *codeobj_dc1a469515eb65487d32acdf4f23462f;
static PyCodeObject *codeobj_93cfd8483112e1901ad52c47afcee97d;
static PyCodeObject *codeobj_cec6a93b7e20f68378b4741bc6e64ec3;
static PyCodeObject *codeobj_100d8f0ee06f3a7f631cd1726f063c8b;
static PyCodeObject *codeobj_f685d3367884d4c9fe8fb1732f65ea12;
static PyCodeObject *codeobj_5c0394aba7238e72f0e56785bff3ed25;
static PyCodeObject *codeobj_80999224be74919b844737699476d6f8;
static PyCodeObject *codeobj_769652da3261b6dc0fe6716d1f009c31;
static PyCodeObject *codeobj_ca68c5775a82168f20ab01a11333f845;
static PyCodeObject *codeobj_e075ceb27ac41bdb6eb20ab8fe900d39;
static PyCodeObject *codeobj_82519bdebbc8f66345b1f22fae9017bb;
static PyCodeObject *codeobj_9bbe453300680c591cff2297a0d2c45f;
static PyCodeObject *codeobj_8ea66e4d3853528b1c329071d6abba61;
static PyCodeObject *codeobj_1bd8f6cde4225843ae67098a513c1f21;
static PyCodeObject *codeobj_ca4d233d3ce21fa46632701bff6e41e0;
static PyCodeObject *codeobj_90f8d9c5d8acf09ec6912548f7611939;
static PyCodeObject *codeobj_eac027a8388fea270dea2b09fac7436c;
static PyCodeObject *codeobj_c279b31bd0ace46aaa0d1f9a41518e30;
static PyCodeObject *codeobj_9e8d7e0ec650c6d03051e6b68840b1c0;
static PyCodeObject *codeobj_ceb5f4f9d68560ee2744054ff2081ebb;
static PyCodeObject *codeobj_f0b35647f3af7a7cb4310996b13acf30;
static PyCodeObject *codeobj_81cf180bcc547a1afa82ca5f33f2c3be;
static PyCodeObject *codeobj_fcd49c20ce693ee4bedfe4e51fb09dfb;
static PyCodeObject *codeobj_98361c859de68f7feaf1ddd50525ca07;
static PyCodeObject *codeobj_4c2b06e925783ae9a2107a14dddb2fd1;
static PyCodeObject *codeobj_cb83d599a146dd7bd7e1811abc197c75;
static PyCodeObject *codeobj_eeb41bf506d78733d37402fa8b27c284;
static PyCodeObject *codeobj_c924088053c58b033679be58d8cc9ebc;
static PyCodeObject *codeobj_0f638840b518309305847590f06204bd;
static PyCodeObject *codeobj_5c7669248965e4ed249aa5581fb72eef;
static PyCodeObject *codeobj_2c03911c21a218611b30e9a3545d50cb;
static PyCodeObject *codeobj_d466e3e29856a80a13399cbc5f128c2b;
static PyCodeObject *codeobj_e1f4a499d83f4431363312a184f326c9;
static PyCodeObject *codeobj_030d6fa3a566d561f1307532997846d3;
static PyCodeObject *codeobj_5d1e8588dfc91bace5499ef99f80f36e;
static PyCodeObject *codeobj_5dec28d413587d6a2b77801960b1965a;
static PyCodeObject *codeobj_30dae8d4c1d78fc270b9f1de0ab07f60;
static PyCodeObject *codeobj_bec263b240ce2041485d9bd5f877f901;
static PyCodeObject *codeobj_a31f8b5b1ca46d5a17f89c037fc4a6f9;
static PyCodeObject *codeobj_f4cf6391a34f57fe83c167ea97325cff;
static PyCodeObject *codeobj_cba84245d012670d5a2b07e28750ce16;
static PyCodeObject *codeobj_023f95254eac2ec4ee87915f44f59b94;
static PyCodeObject *codeobj_fad890eedbac0a1e1f4bd03085eefb08;
static PyCodeObject *codeobj_28227373e0009115f84d55e919dd1db6;
static PyCodeObject *codeobj_5693d143998f40ba201214bbfad0191f;
static PyCodeObject *codeobj_60740d74b7bc06e51c68e99c24d8ae1c;
static PyCodeObject *codeobj_0f4b966d652221286db5f3075115c28a;
static PyCodeObject *codeobj_4d49c68bc33239e82f31be9d90bd2b57;
static PyCodeObject *codeobj_bd7243e7965cb361871070a330b82cb0;
static PyCodeObject *codeobj_fc1f3756176d8778defcdcddaa814872;
static PyCodeObject *codeobj_066f31078dad195fbd1787ea646c5d56;
static PyCodeObject *codeobj_cecd74bf66e3fa7d863232156674c8cc;
static PyCodeObject *codeobj_ee4970829d3f97746c3931e85a48a156;
static PyCodeObject *codeobj_cdf78702e5da798d4b8d400a02772b50;
static PyCodeObject *codeobj_f72da07ba8bf9912026358a301c583b4;
static PyCodeObject *codeobj_a9eb6522e56d62e7eebe70e065275af8;
static PyCodeObject *codeobj_9bda6d37b4f05edc6c0eef860ddc05b2;
static PyCodeObject *codeobj_4cb38be67a9fd6c96e03d9ec71ded4a9;
static PyCodeObject *codeobj_f74e242bab4fc2622a8bd38450f154d8;
static PyCodeObject *codeobj_154eebc98c3aa86873e9951cce55f122;
static PyCodeObject *codeobj_250b4fcf6b01c24e3cf0b40759c5f0ff;
static PyCodeObject *codeobj_194731c7da2581dc274ce2db34625c1a;
static PyCodeObject *codeobj_71ad33d94ba9081bd4e2b4ea1ee40cc5;
static PyCodeObject *codeobj_288bca1e38e02a0fe4aacbf0c5cfde1e;
static PyCodeObject *codeobj_a7f07f0f07f60951263b409ce235db09;
static PyCodeObject *codeobj_3b69267a367ac73de3e1d1a59a942879;
static PyCodeObject *codeobj_7c074618ae6ce27ae64579b89fbe17b1;
static PyCodeObject *codeobj_476bc57cc378899b3b7aabf75a50ba57;
static PyCodeObject *codeobj_3d545d32e1a4127e7535596b02706717;
static PyCodeObject *codeobj_0bc41d407ddfb82230f9444cf3b96e14;
static PyCodeObject *codeobj_2243513c184eae07fa3f23f4455843f6;
static PyCodeObject *codeobj_4983c686b30ae9685acc19d1d4373864;
static PyCodeObject *codeobj_2dcb84b4c56001d6d01591b4116ff684;
static PyCodeObject *codeobj_51d9e8f56b47fb7ce716139f39927705;
static PyCodeObject *codeobj_d975901722a4f4743eeac815c53bac95;
static PyCodeObject *codeobj_d1adcb21b4337edb0a206659aae71dfa;
static PyCodeObject *codeobj_34bf83c761c6a3c76c504b77053642a3;
static PyCodeObject *codeobj_dd87527abf147047778bda4eaed155ba;
static PyCodeObject *codeobj_82f0effa0184fb6df37b3e2ad87790d1;
static PyCodeObject *codeobj_00afc309bbb9945d7d716bcf1917ff2a;
static PyCodeObject *codeobj_4c1c113c53f4af55772cbfd9250607de;
static PyCodeObject *codeobj_7daeb2c5e2260548e7b31c66c684b4bd;
static PyCodeObject *codeobj_226accbf431184496256d181543822bc;
static PyCodeObject *codeobj_77246be08e8c816ad3a5139b65775b6c;
static PyCodeObject *codeobj_d8d270e1ed6d73a72f3e1a038864d34c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[364]); CHECK_OBJECT(module_filename_obj);
    codeobj_49517bcfc160cc63b029c7fab051cf23 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[365], mod_consts[365], NULL, NULL, 0, 0, 0);
    codeobj_ea0f1c0bbafc4953fd9fe163fe42693a = MAKE_CODE_OBJECT(module_filename_obj, 792, CO_VARARGS | CO_NOFREE, mod_consts[187], mod_consts[187], mod_consts[366], NULL, 0, 0, 0);
    codeobj_827c624b3550fff265f19b7e355280ec = MAKE_CODE_OBJECT(module_filename_obj, 805, CO_NOFREE, mod_consts[189], mod_consts[189], mod_consts[367], NULL, 0, 0, 0);
    codeobj_052996a314ed08171ddb6181cf3ba5c4 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[367], NULL, 0, 0, 0);
    codeobj_ca246108a193c73d3d7a633444999689 = MAKE_CODE_OBJECT(module_filename_obj, 979, CO_NOFREE, mod_consts[244], mod_consts[244], mod_consts[367], NULL, 0, 0, 0);
    codeobj_f78e9333d9a08fe1610642a108267930 = MAKE_CODE_OBJECT(module_filename_obj, 1149, CO_NOFREE, mod_consts[318], mod_consts[318], mod_consts[367], NULL, 0, 0, 0);
    codeobj_6c0c47698beb996d881bddd24982353d = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[367], NULL, 0, 0, 0);
    codeobj_4076d56ca49b83a4ba0b54f19f8d82c7 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[367], NULL, 0, 0, 0);
    codeobj_627758dd1158aacbad0b7a1fde720511 = MAKE_CODE_OBJECT(module_filename_obj, 1109, CO_NOFREE, mod_consts[302], mod_consts[302], mod_consts[367], NULL, 0, 0, 0);
    codeobj_a3d705b689d7abc012a8d6b1bdab8595 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[367], NULL, 0, 0, 0);
    codeobj_efb42f7f6ff8664954adb3bedaaa682a = MAKE_CODE_OBJECT(module_filename_obj, 463, CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[367], NULL, 0, 0, 0);
    codeobj_136075989d8aec5d2437a34f0ab69c4f = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[367], NULL, 0, 0, 0);
    codeobj_5d1cfa19d38fe760cabc775f079e298d = MAKE_CODE_OBJECT(module_filename_obj, 962, CO_NOFREE, mod_consts[237], mod_consts[237], mod_consts[367], NULL, 0, 0, 0);
    codeobj_0d1cf53515b818257c5ee3d754df121d = MAKE_CODE_OBJECT(module_filename_obj, 1060, CO_NOFREE, mod_consts[277], mod_consts[277], mod_consts[367], NULL, 0, 0, 0);
    codeobj_dc1a469515eb65487d32acdf4f23462f = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[367], NULL, 0, 0, 0);
    codeobj_93cfd8483112e1901ad52c47afcee97d = MAKE_CODE_OBJECT(module_filename_obj, 1075, CO_NOFREE, mod_consts[285], mod_consts[285], mod_consts[367], NULL, 0, 0, 0);
    codeobj_cec6a93b7e20f68378b4741bc6e64ec3 = MAKE_CODE_OBJECT(module_filename_obj, 1125, CO_NOFREE, mod_consts[308], mod_consts[308], mod_consts[367], NULL, 0, 0, 0);
    codeobj_100d8f0ee06f3a7f631cd1726f063c8b = MAKE_CODE_OBJECT(module_filename_obj, 1083, CO_NOFREE, mod_consts[293], mod_consts[293], mod_consts[367], NULL, 0, 0, 0);
    codeobj_f685d3367884d4c9fe8fb1732f65ea12 = MAKE_CODE_OBJECT(module_filename_obj, 448, CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[366], NULL, 1, 0, 0);
    codeobj_5c0394aba7238e72f0e56785bff3ed25 = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[368], NULL, 1, 0, 0);
    codeobj_80999224be74919b844737699476d6f8 = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[369], NULL, 1, 0, 0);
    codeobj_769652da3261b6dc0fe6716d1f009c31 = MAKE_CODE_OBJECT(module_filename_obj, 371, CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[369], NULL, 1, 0, 0);
    codeobj_ca68c5775a82168f20ab01a11333f845 = MAKE_CODE_OBJECT(module_filename_obj, 975, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[241], mod_consts[241], mod_consts[370], NULL, 2, 0, 0);
    codeobj_e075ceb27ac41bdb6eb20ab8fe900d39 = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_NOFREE, mod_consts[117], mod_consts[117], NULL, NULL, 0, 0, 0);
    codeobj_82519bdebbc8f66345b1f22fae9017bb = MAKE_CODE_OBJECT(module_filename_obj, 418, CO_NOFREE, mod_consts[117], mod_consts[117], NULL, NULL, 0, 0, 0);
    codeobj_9bbe453300680c591cff2297a0d2c45f = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_NOFREE, mod_consts[136], mod_consts[136], NULL, NULL, 0, 0, 0);
    codeobj_8ea66e4d3853528b1c329071d6abba61 = MAKE_CODE_OBJECT(module_filename_obj, 1128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[310], mod_consts[310], mod_consts[371], NULL, 1, 0, 0);
    codeobj_1bd8f6cde4225843ae67098a513c1f21 = MAKE_CODE_OBJECT(module_filename_obj, 434, CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[366], NULL, 1, 0, 0);
    codeobj_ca4d233d3ce21fa46632701bff6e41e0 = MAKE_CODE_OBJECT(module_filename_obj, 862, CO_NOFREE, mod_consts[212], mod_consts[212], mod_consts[372], NULL, 4, 0, 0);
    codeobj_90f8d9c5d8acf09ec6912548f7611939 = MAKE_CODE_OBJECT(module_filename_obj, 722, CO_VARARGS | CO_NOFREE, mod_consts[175], mod_consts[175], mod_consts[373], NULL, 1, 0, 0);
    codeobj_eac027a8388fea270dea2b09fac7436c = MAKE_CODE_OBJECT(module_filename_obj, 589, CO_VARARGS | CO_NOFREE, mod_consts[155], mod_consts[155], mod_consts[374], NULL, 1, 0, 0);
    codeobj_c279b31bd0ace46aaa0d1f9a41518e30 = MAKE_CODE_OBJECT(module_filename_obj, 619, CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[375], NULL, 2, 0, 0);
    codeobj_9e8d7e0ec650c6d03051e6b68840b1c0 = MAKE_CODE_OBJECT(module_filename_obj, 635, CO_VARARGS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[374], NULL, 1, 0, 0);
    codeobj_ceb5f4f9d68560ee2744054ff2081ebb = MAKE_CODE_OBJECT(module_filename_obj, 377, CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[369], NULL, 1, 0, 0);
    codeobj_f0b35647f3af7a7cb4310996b13acf30 = MAKE_CODE_OBJECT(module_filename_obj, 669, CO_NOFREE, mod_consts[169], mod_consts[169], mod_consts[376], NULL, 1, 0, 0);
    codeobj_81cf180bcc547a1afa82ca5f33f2c3be = MAKE_CODE_OBJECT(module_filename_obj, 678, CO_VARARGS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[373], NULL, 1, 0, 0);
    codeobj_fcd49c20ce693ee4bedfe4e51fb09dfb = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[377], NULL, 2, 0, 0);
    codeobj_98361c859de68f7feaf1ddd50525ca07 = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_NOFREE, mod_consts[127], mod_consts[127], NULL, NULL, 0, 0, 0);
    codeobj_4c2b06e925783ae9a2107a14dddb2fd1 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[378], NULL, 2, 0, 0);
    codeobj_cb83d599a146dd7bd7e1811abc197c75 = MAKE_CODE_OBJECT(module_filename_obj, 998, CO_NOFREE, mod_consts[253], mod_consts[253], mod_consts[379], NULL, 3, 0, 0);
    codeobj_eeb41bf506d78733d37402fa8b27c284 = MAKE_CODE_OBJECT(module_filename_obj, 1018, CO_NOFREE, mod_consts[261], mod_consts[261], mod_consts[380], NULL, 2, 0, 0);
    codeobj_c924088053c58b033679be58d8cc9ebc = MAKE_CODE_OBJECT(module_filename_obj, 1051, CO_NOFREE, mod_consts[275], mod_consts[275], mod_consts[368], NULL, 1, 0, 0);
    codeobj_0f638840b518309305847590f06204bd = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[381], NULL, 1, 0, 0);
    codeobj_5c7669248965e4ed249aa5581fb72eef = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_NOFREE, mod_consts[54], mod_consts[54], NULL, NULL, 0, 0, 0);
    codeobj_2c03911c21a218611b30e9a3545d50cb = MAKE_CODE_OBJECT(module_filename_obj, 1011, CO_NOFREE, mod_consts[258], mod_consts[258], mod_consts[382], NULL, 3, 0, 0);
    codeobj_d466e3e29856a80a13399cbc5f128c2b = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_NOFREE, mod_consts[64], mod_consts[64], NULL, NULL, 0, 0, 0);
    codeobj_e1f4a499d83f4431363312a184f326c9 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_NOFREE, mod_consts[67], mod_consts[67], NULL, NULL, 0, 0, 0);
    codeobj_030d6fa3a566d561f1307532997846d3 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[381], NULL, 1, 0, 0);
    codeobj_5d1e8588dfc91bace5499ef99f80f36e = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_NOFREE, mod_consts[42], mod_consts[42], NULL, NULL, 0, 0, 0);
    codeobj_5dec28d413587d6a2b77801960b1965a = MAKE_CODE_OBJECT(module_filename_obj, 1045, CO_NOFREE, mod_consts[272], mod_consts[272], mod_consts[368], NULL, 1, 0, 0);
    codeobj_30dae8d4c1d78fc270b9f1de0ab07f60 = MAKE_CODE_OBJECT(module_filename_obj, 1033, CO_VARARGS | CO_NOFREE, mod_consts[266], mod_consts[266], mod_consts[383], NULL, 0, 0, 0);
    codeobj_bec263b240ce2041485d9bd5f877f901 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[384], NULL, 1, 0, 0);
    codeobj_a31f8b5b1ca46d5a17f89c037fc4a6f9 = MAKE_CODE_OBJECT(module_filename_obj, 576, CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[384], NULL, 1, 0, 0);
    codeobj_f4cf6391a34f57fe83c167ea97325cff = MAKE_CODE_OBJECT(module_filename_obj, 624, CO_VARARGS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[366], NULL, 0, 0, 0);
    codeobj_cba84245d012670d5a2b07e28750ce16 = MAKE_CODE_OBJECT(module_filename_obj, 659, CO_VARARGS | CO_NOFREE, mod_consts[166], mod_consts[166], mod_consts[366], NULL, 0, 0, 0);
    codeobj_023f95254eac2ec4ee87915f44f59b94 = MAKE_CODE_OBJECT(module_filename_obj, 531, CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[385], NULL, 1, 0, 0);
    codeobj_fad890eedbac0a1e1f4bd03085eefb08 = MAKE_CODE_OBJECT(module_filename_obj, 509, CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[386], NULL, 1, 0, 0);
    codeobj_28227373e0009115f84d55e919dd1db6 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[387], NULL, 1, 0, 0);
    codeobj_5693d143998f40ba201214bbfad0191f = MAKE_CODE_OBJECT(module_filename_obj, 838, CO_NOFREE, mod_consts[200], mod_consts[200], mod_consts[388], NULL, 4, 0, 0);
    codeobj_60740d74b7bc06e51c68e99c24d8ae1c = MAKE_CODE_OBJECT(module_filename_obj, 850, CO_NOFREE, mod_consts[206], mod_consts[206], mod_consts[388], NULL, 4, 0, 0);
    codeobj_0f4b966d652221286db5f3075115c28a = MAKE_CODE_OBJECT(module_filename_obj, 868, CO_NOFREE, mod_consts[215], mod_consts[215], mod_consts[389], NULL, 2, 0, 0);
    codeobj_4d49c68bc33239e82f31be9d90bd2b57 = MAKE_CODE_OBJECT(module_filename_obj, 764, CO_VARARGS | CO_NOFREE, mod_consts[184], mod_consts[184], mod_consts[366], NULL, 0, 0, 0);
    codeobj_bd7243e7965cb361871070a330b82cb0 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[390], NULL, 1, 0, 0);
    codeobj_fc1f3756176d8778defcdcddaa814872 = MAKE_CODE_OBJECT(module_filename_obj, 874, CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[389], NULL, 2, 0, 0);
    codeobj_066f31078dad195fbd1787ea646c5d56 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[390], NULL, 1, 0, 0);
    codeobj_cecd74bf66e3fa7d863232156674c8cc = MAKE_CODE_OBJECT(module_filename_obj, 737, CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[391], NULL, 2, 0, 0);
    codeobj_ee4970829d3f97746c3931e85a48a156 = MAKE_CODE_OBJECT(module_filename_obj, 564, CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[392], NULL, 1, 0, 0);
    codeobj_cdf78702e5da798d4b8d400a02772b50 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[376], NULL, 1, 0, 0);
    codeobj_f72da07ba8bf9912026358a301c583b4 = MAKE_CODE_OBJECT(module_filename_obj, 757, CO_VARARGS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[366], NULL, 0, 0, 0);
    codeobj_a9eb6522e56d62e7eebe70e065275af8 = MAKE_CODE_OBJECT(module_filename_obj, 992, CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[393], NULL, 4, 0, 0);
    codeobj_9bda6d37b4f05edc6c0eef860ddc05b2 = MAKE_CODE_OBJECT(module_filename_obj, 858, CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[394], NULL, 4, 0, 0);
    codeobj_4cb38be67a9fd6c96e03d9ec71ded4a9 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[395], NULL, 2, 0, 0);
    codeobj_f74e242bab4fc2622a8bd38450f154d8 = MAKE_CODE_OBJECT(module_filename_obj, 1005, CO_NOFREE, mod_consts[203], mod_consts[203], mod_consts[396], NULL, 4, 0, 0);
    codeobj_154eebc98c3aa86873e9951cce55f122 = MAKE_CODE_OBJECT(module_filename_obj, 846, CO_NOFREE, mod_consts[203], mod_consts[203], mod_consts[397], NULL, 4, 0, 0);
    codeobj_250b4fcf6b01c24e3cf0b40759c5f0ff = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[395], NULL, 2, 0, 0);
    codeobj_194731c7da2581dc274ce2db34625c1a = MAKE_CODE_OBJECT(module_filename_obj, 1039, CO_NOFREE, mod_consts[269], mod_consts[269], mod_consts[398], NULL, 3, 0, 0);
    codeobj_71ad33d94ba9081bd4e2b4ea1ee40cc5 = MAKE_CODE_OBJECT(module_filename_obj, 817, CO_NOFREE, mod_consts[192], mod_consts[192], mod_consts[399], NULL, 4, 0, 0);
    codeobj_288bca1e38e02a0fe4aacbf0c5cfde1e = MAKE_CODE_OBJECT(module_filename_obj, 1221, CO_NOFREE, mod_consts[333], mod_consts[333], mod_consts[400], NULL, 5, 0, 0);
    codeobj_a7f07f0f07f60951263b409ce235db09 = MAKE_CODE_OBJECT(module_filename_obj, 1396, CO_NOFREE, mod_consts[353], mod_consts[353], mod_consts[401], NULL, 4, 0, 0);
    codeobj_3b69267a367ac73de3e1d1a59a942879 = MAKE_CODE_OBJECT(module_filename_obj, 1305, CO_NOFREE, mod_consts[343], mod_consts[343], mod_consts[402], NULL, 5, 0, 0);
    codeobj_7c074618ae6ce27ae64579b89fbe17b1 = MAKE_CODE_OBJECT(module_filename_obj, 1153, CO_NOFREE, mod_consts[322], mod_consts[322], mod_consts[403], NULL, 5, 0, 0);
    codeobj_476bc57cc378899b3b7aabf75a50ba57 = MAKE_CODE_OBJECT(module_filename_obj, 824, CO_NOFREE, mod_consts[196], mod_consts[196], mod_consts[404], NULL, 3, 0, 0);
    codeobj_3d545d32e1a4127e7535596b02706717 = MAKE_CODE_OBJECT(module_filename_obj, 1298, CO_NOFREE, mod_consts[340], mod_consts[340], NULL, NULL, 0, 0, 0);
    codeobj_0bc41d407ddfb82230f9444cf3b96e14 = MAKE_CODE_OBJECT(module_filename_obj, 1467, CO_NOFREE, mod_consts[360], mod_consts[360], NULL, NULL, 0, 0, 0);
    codeobj_2243513c184eae07fa3f23f4455843f6 = MAKE_CODE_OBJECT(module_filename_obj, 1389, CO_NOFREE, mod_consts[349], mod_consts[349], NULL, NULL, 0, 0, 0);
    codeobj_4983c686b30ae9685acc19d1d4373864 = MAKE_CODE_OBJECT(module_filename_obj, 1214, CO_NOFREE, mod_consts[329], mod_consts[329], NULL, NULL, 0, 0, 0);
    codeobj_2dcb84b4c56001d6d01591b4116ff684 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[405], NULL, 2, 0, 0);
    codeobj_51d9e8f56b47fb7ce716139f39927705 = MAKE_CODE_OBJECT(module_filename_obj, 878, CO_NOFREE, mod_consts[220], mod_consts[220], mod_consts[406], NULL, 3, 0, 0);
    codeobj_d975901722a4f4743eeac815c53bac95 = MAKE_CODE_OBJECT(module_filename_obj, 892, CO_NOFREE, mod_consts[223], mod_consts[223], mod_consts[406], NULL, 3, 0, 0);
    codeobj_d1adcb21b4337edb0a206659aae71dfa = MAKE_CODE_OBJECT(module_filename_obj, 927, CO_NOFREE, mod_consts[229], mod_consts[229], mod_consts[380], NULL, 2, 0, 0);
    codeobj_34bf83c761c6a3c76c504b77053642a3 = MAKE_CODE_OBJECT(module_filename_obj, 1025, CO_NOFREE, mod_consts[229], mod_consts[229], mod_consts[380], NULL, 2, 0, 0);
    codeobj_dd87527abf147047778bda4eaed155ba = MAKE_CODE_OBJECT(module_filename_obj, 912, CO_NOFREE, mod_consts[226], mod_consts[226], mod_consts[389], NULL, 2, 0, 0);
    codeobj_82f0effa0184fb6df37b3e2ad87790d1 = MAKE_CODE_OBJECT(module_filename_obj, 496, CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[407], NULL, 2, 0, 0);
    codeobj_00afc309bbb9945d7d716bcf1917ff2a = MAKE_CODE_OBJECT(module_filename_obj, 1256, CO_NOFREE, mod_consts[337], mod_consts[337], mod_consts[408], NULL, 4, 0, 0);
    codeobj_4c1c113c53f4af55772cbfd9250607de = MAKE_CODE_OBJECT(module_filename_obj, 1431, CO_NOFREE, mod_consts[357], mod_consts[357], mod_consts[409], NULL, 3, 0, 0);
    codeobj_7daeb2c5e2260548e7b31c66c684b4bd = MAKE_CODE_OBJECT(module_filename_obj, 1343, CO_NOFREE, mod_consts[346], mod_consts[346], mod_consts[410], NULL, 4, 0, 0);
    codeobj_226accbf431184496256d181543822bc = MAKE_CODE_OBJECT(module_filename_obj, 1181, CO_NOFREE, mod_consts[326], mod_consts[326], mod_consts[411], NULL, 4, 0, 0);
    codeobj_77246be08e8c816ad3a5139b65775b6c = MAKE_CODE_OBJECT(module_filename_obj, 383, CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[412], NULL, 2, 0, 0);
    codeobj_d8d270e1ed6d73a72f3e1a038864d34c = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[413], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__10_providedBy();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__11_implementedBy();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__12_isOrExtends();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__13_extends(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__14_weakref(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__15_get(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__16_names(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__17_namesAndDescriptions(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__18___getitem__();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__19_direct();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__1_getTaggedValue();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__20_validateInvariants(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__21___contains__();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__22___iter__();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__23___contains__();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__24___iter__();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__25_flattened();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__26___sub__();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__27___add__();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__28___nonzero__();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__29_taggedValue();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__2_queryTaggedValue(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__30_invariant();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__31_interfacemethod();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__32_providedBy();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__33_implementedBy();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__34_classImplements();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__35_classImplementsFirst();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__36_implementer();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__37_classImplementsOnly();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__38_implementer_only();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__39_directlyProvidedBy();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__3_getTaggedValueTags();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__40_directlyProvides();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__41_alsoProvides();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__42_noLongerProvides();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__43_provider();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__44_moduleProvides();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__45_Declaration();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__46_register();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__47_registered(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__48_lookup(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__49_queryMultiAdapter(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__4_setTaggedValue();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__50_lookup1(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__51_queryAdapter(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__52_adapter_hook(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__53_lookupAll();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__54_names();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__55_subscribe();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__56_subscribed();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__57_subscriptions();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__58_subscribers();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__59___init__();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__5_getDirectTaggedValue();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__60_queryAdapter(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__61_getAdapter(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__62_queryMultiAdapter(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__63_getMultiAdapter(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__64_getAdapters();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__65_subscribers();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__66_handle();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__67_queryUtility(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__68_getUtilitiesFor();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__69_getAllUtilitiesRegisteredFor();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__6_queryDirectTaggedValue(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__70___repr__();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__71_registerUtility(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__72_unregisterUtility(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__73_registeredUtilities();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__74_registerAdapter(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__75_unregisterAdapter(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__76_registeredAdapters();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__77_registerSubscriptionAdapter(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__78_unregisterSubscriptionAdapter(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__79_registeredSubscriptionAdapters();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__7_getDirectTaggedValueTags();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__80_registerHandler(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__81_unregisterHandler(PyObject *defaults);


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__82_registeredHandlers();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__8_getSignatureInfo();


static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__9_getSignatureString();


// The module function definitions.
static PyObject *impl_zope$interface$interfaces$$$function__59___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_object = python_pars[1];
    struct Nuitka_FrameObject *frame_ca68c5775a82168f20ab01a11333f845;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ca68c5775a82168f20ab01a11333f845 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ca68c5775a82168f20ab01a11333f845)) {
        Py_XDECREF(cache_frame_ca68c5775a82168f20ab01a11333f845);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ca68c5775a82168f20ab01a11333f845 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ca68c5775a82168f20ab01a11333f845 = MAKE_FUNCTION_FRAME(tstate, codeobj_ca68c5775a82168f20ab01a11333f845, module_zope$interface$interfaces, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ca68c5775a82168f20ab01a11333f845->m_type_description == NULL);
    frame_ca68c5775a82168f20ab01a11333f845 = cache_frame_ca68c5775a82168f20ab01a11333f845;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ca68c5775a82168f20ab01a11333f845);
    assert(Py_REFCNT(frame_ca68c5775a82168f20ab01a11333f845) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_object);
        tmp_assattr_value_1 = par_object;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 976;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ca68c5775a82168f20ab01a11333f845, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca68c5775a82168f20ab01a11333f845->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca68c5775a82168f20ab01a11333f845, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ca68c5775a82168f20ab01a11333f845,
        type_description_1,
        par_self,
        par_object
    );


    // Release cached frame if used for exception.
    if (frame_ca68c5775a82168f20ab01a11333f845 == cache_frame_ca68c5775a82168f20ab01a11333f845) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ca68c5775a82168f20ab01a11333f845);
        cache_frame_ca68c5775a82168f20ab01a11333f845 = NULL;
    }

    assertFrameObject(frame_ca68c5775a82168f20ab01a11333f845);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_object);
    Py_DECREF(par_object);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_object);
    Py_DECREF(par_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_zope$interface$interfaces$$$function__70___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8ea66e4d3853528b1c329071d6abba61;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8ea66e4d3853528b1c329071d6abba61 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8ea66e4d3853528b1c329071d6abba61)) {
        Py_XDECREF(cache_frame_8ea66e4d3853528b1c329071d6abba61);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ea66e4d3853528b1c329071d6abba61 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ea66e4d3853528b1c329071d6abba61 = MAKE_FUNCTION_FRAME(tstate, codeobj_8ea66e4d3853528b1c329071d6abba61, module_zope$interface$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ea66e4d3853528b1c329071d6abba61->m_type_description == NULL);
    frame_8ea66e4d3853528b1c329071d6abba61 = cache_frame_8ea66e4d3853528b1c329071d6abba61;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8ea66e4d3853528b1c329071d6abba61);
    assert(Py_REFCNT(frame_8ea66e4d3853528b1c329071d6abba61) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_3;
        tmp_kw_call_arg_value_0_1 = mod_consts[1];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 1129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8ea66e4d3853528b1c329071d6abba61->m_frame.f_lineno = 1129;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8ea66e4d3853528b1c329071d6abba61, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ea66e4d3853528b1c329071d6abba61->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ea66e4d3853528b1c329071d6abba61, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ea66e4d3853528b1c329071d6abba61,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8ea66e4d3853528b1c329071d6abba61 == cache_frame_8ea66e4d3853528b1c329071d6abba61) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ea66e4d3853528b1c329071d6abba61);
        cache_frame_8ea66e4d3853528b1c329071d6abba61 = NULL;
    }

    assertFrameObject(frame_8ea66e4d3853528b1c329071d6abba61);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__10_providedBy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_cdf78702e5da798d4b8d400a02772b50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__11_implementedBy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_bec263b240ce2041485d9bd5f877f901,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__12_isOrExtends() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_28227373e0009115f84d55e919dd1db6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__13_extends(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        mod_consts[83],
#endif
        codeobj_fcd49c20ce693ee4bedfe4e51fb09dfb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[81],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__14_weakref(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_d8d270e1ed6d73a72f3e1a038864d34c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[84],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__15_get(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_4c2b06e925783ae9a2107a14dddb2fd1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__16_names(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_bd7243e7965cb361871070a330b82cb0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[99],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__17_namesAndDescriptions(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_066f31078dad195fbd1787ea646c5d56,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[102],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__18___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_769652da3261b6dc0fe6716d1f009c31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[105],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__19_direct() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_ceb5f4f9d68560ee2744054ff2081ebb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[107],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__1_getTaggedValue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[36],
#endif
        codeobj_030d6fa3a566d561f1307532997846d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__20_validateInvariants(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_77246be08e8c816ad3a5139b65775b6c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[110],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__21___contains__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_80999224be74919b844737699476d6f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[113],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__22___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_e075ceb27ac41bdb6eb20ab8fe900d39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[116],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__23___contains__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_5c0394aba7238e72f0e56785bff3ed25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[122],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__24___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_82519bdebbc8f66345b1f22fae9017bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[124],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__25_flattened() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_98361c859de68f7feaf1ddd50525ca07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[126],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__26___sub__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_1bd8f6cde4225843ae67098a513c1f21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[129],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__27___add__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_f685d3367884d4c9fe8fb1732f65ea12,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[132],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__28___nonzero__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_9bbe453300680c591cff2297a0d2c45f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[135],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__29_taggedValue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_82f0effa0184fb6df37b3e2ad87790d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[141],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__2_queryTaggedValue(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_250b4fcf6b01c24e3cf0b40759c5f0ff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__30_invariant() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_fad890eedbac0a1e1f4bd03085eefb08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[144],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__31_interfacemethod() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_023f95254eac2ec4ee87915f44f59b94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[147],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__32_providedBy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_ee4970829d3f97746c3931e85a48a156,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[150],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__33_implementedBy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_a31f8b5b1ca46d5a17f89c037fc4a6f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[152],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__34_classImplements() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_eac027a8388fea270dea2b09fac7436c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[154],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__35_classImplementsFirst() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_c279b31bd0ace46aaa0d1f9a41518e30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[157],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__36_implementer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_f4cf6391a34f57fe83c167ea97325cff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[160],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__37_classImplementsOnly() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_9e8d7e0ec650c6d03051e6b68840b1c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[162],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__38_implementer_only() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_cba84245d012670d5a2b07e28750ce16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[165],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__39_directlyProvidedBy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_f0b35647f3af7a7cb4310996b13acf30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[168],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__3_getTaggedValueTags() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[43],
#endif
        codeobj_5d1e8588dfc91bace5499ef99f80f36e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__40_directlyProvides() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_81cf180bcc547a1afa82ca5f33f2c3be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[171],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__41_alsoProvides() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_90f8d9c5d8acf09ec6912548f7611939,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[174],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__42_noLongerProvides() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_cecd74bf66e3fa7d863232156674c8cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[177],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__43_provider() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_f72da07ba8bf9912026358a301c583b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[180],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__44_moduleProvides() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_4d49c68bc33239e82f31be9d90bd2b57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[183],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__45_Declaration() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_ea0f1c0bbafc4953fd9fe163fe42693a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[186],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__46_register() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_71ad33d94ba9081bd4e2b4ea1ee40cc5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[191],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__47_registered(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_476bc57cc378899b3b7aabf75a50ba57,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[195],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__48_lookup(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[200],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_5693d143998f40ba201214bbfad0191f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[199],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__49_queryMultiAdapter(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_154eebc98c3aa86873e9951cce55f122,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[202],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__4_setTaggedValue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_2dcb84b4c56001d6d01591b4116ff684,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__50_lookup1(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_60740d74b7bc06e51c68e99c24d8ae1c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[205],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__51_queryAdapter(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_9bda6d37b4f05edc6c0eef860ddc05b2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[208],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__52_adapter_hook(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_ca4d233d3ce21fa46632701bff6e41e0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[211],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__53_lookupAll() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[215],
#if PYTHON_VERSION >= 0x300
        mod_consts[216],
#endif
        codeobj_0f4b966d652221286db5f3075115c28a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[214],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__54_names() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        codeobj_fc1f3756176d8778defcdcddaa814872,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[217],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__55_subscribe() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[220],
#if PYTHON_VERSION >= 0x300
        mod_consts[221],
#endif
        codeobj_51d9e8f56b47fb7ce716139f39927705,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[219],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__56_subscribed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        mod_consts[224],
#endif
        codeobj_d975901722a4f4743eeac815c53bac95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[222],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__57_subscriptions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        mod_consts[227],
#endif
        codeobj_dd87527abf147047778bda4eaed155ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[225],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__58_subscribers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[229],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_d1adcb21b4337edb0a206659aae71dfa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[228],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__59___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_zope$interface$interfaces$$$function__59___init__,
        mod_consts[241],
#if PYTHON_VERSION >= 0x300
        mod_consts[242],
#endif
        codeobj_ca68c5775a82168f20ab01a11333f845,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__5_getDirectTaggedValue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_0f638840b518309305847590f06204bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__60_queryAdapter(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_a9eb6522e56d62e7eebe70e065275af8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[250],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__61_getAdapter(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[253],
#if PYTHON_VERSION >= 0x300
        mod_consts[254],
#endif
        codeobj_cb83d599a146dd7bd7e1811abc197c75,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[252],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__62_queryMultiAdapter(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        mod_consts[256],
#endif
        codeobj_f74e242bab4fc2622a8bd38450f154d8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[255],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__63_getMultiAdapter(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[258],
#if PYTHON_VERSION >= 0x300
        mod_consts[259],
#endif
        codeobj_2c03911c21a218611b30e9a3545d50cb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[257],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__64_getAdapters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[261],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_eeb41bf506d78733d37402fa8b27c284,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[260],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__65_subscribers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[229],
#if PYTHON_VERSION >= 0x300
        mod_consts[264],
#endif
        codeobj_34bf83c761c6a3c76c504b77053642a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[263],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__66_handle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[266],
#if PYTHON_VERSION >= 0x300
        mod_consts[267],
#endif
        codeobj_30dae8d4c1d78fc270b9f1de0ab07f60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[265],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__67_queryUtility(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[269],
#if PYTHON_VERSION >= 0x300
        mod_consts[270],
#endif
        codeobj_194731c7da2581dc274ce2db34625c1a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[268],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__68_getUtilitiesFor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[272],
#if PYTHON_VERSION >= 0x300
        mod_consts[273],
#endif
        codeobj_5dec28d413587d6a2b77801960b1965a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[271],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__69_getAllUtilitiesRegisteredFor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[275],
#if PYTHON_VERSION >= 0x300
        mod_consts[276],
#endif
        codeobj_c924088053c58b033679be58d8cc9ebc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[274],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__6_queryDirectTaggedValue(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        codeobj_4cb38be67a9fd6c96e03d9ec71ded4a9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__70___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_zope$interface$interfaces$$$function__70___repr__,
        mod_consts[310],
#if PYTHON_VERSION >= 0x300
        mod_consts[311],
#endif
        codeobj_8ea66e4d3853528b1c329071d6abba61,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__71_registerUtility(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[322],
#if PYTHON_VERSION >= 0x300
        mod_consts[323],
#endif
        codeobj_7c074618ae6ce27ae64579b89fbe17b1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[321],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__72_unregisterUtility(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[326],
#if PYTHON_VERSION >= 0x300
        mod_consts[327],
#endif
        codeobj_226accbf431184496256d181543822bc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[325],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__73_registeredUtilities() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[329],
#if PYTHON_VERSION >= 0x300
        mod_consts[330],
#endif
        codeobj_4983c686b30ae9685acc19d1d4373864,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[328],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__74_registerAdapter(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[333],
#if PYTHON_VERSION >= 0x300
        mod_consts[334],
#endif
        codeobj_288bca1e38e02a0fe4aacbf0c5cfde1e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[332],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__75_unregisterAdapter(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[337],
#if PYTHON_VERSION >= 0x300
        mod_consts[338],
#endif
        codeobj_00afc309bbb9945d7d716bcf1917ff2a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[336],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__76_registeredAdapters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[340],
#if PYTHON_VERSION >= 0x300
        mod_consts[341],
#endif
        codeobj_3d545d32e1a4127e7535596b02706717,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[339],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__77_registerSubscriptionAdapter(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[343],
#if PYTHON_VERSION >= 0x300
        mod_consts[344],
#endif
        codeobj_3b69267a367ac73de3e1d1a59a942879,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[342],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__78_unregisterSubscriptionAdapter(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[346],
#if PYTHON_VERSION >= 0x300
        mod_consts[347],
#endif
        codeobj_7daeb2c5e2260548e7b31c66c684b4bd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[345],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__79_registeredSubscriptionAdapters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[349],
#if PYTHON_VERSION >= 0x300
        mod_consts[350],
#endif
        codeobj_2243513c184eae07fa3f23f4455843f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[348],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__7_getDirectTaggedValueTags() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        codeobj_5c7669248965e4ed249aa5581fb72eef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__80_registerHandler(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[353],
#if PYTHON_VERSION >= 0x300
        mod_consts[354],
#endif
        codeobj_a7f07f0f07f60951263b409ce235db09,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[352],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__81_unregisterHandler(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[357],
#if PYTHON_VERSION >= 0x300
        mod_consts[358],
#endif
        codeobj_4c1c113c53f4af55772cbfd9250607de,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[356],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__82_registeredHandlers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[360],
#if PYTHON_VERSION >= 0x300
        mod_consts[361],
#endif
        codeobj_0bc41d407ddfb82230f9444cf3b96e14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[359],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__8_getSignatureInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        codeobj_d466e3e29856a80a13399cbc5f128c2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zope$interface$interfaces$$$function__9_getSignatureString() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        codeobj_e1f4a499d83f4431363312a184f326c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zope$interface$interfaces,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_zope$interface$interfaces[] = {
    impl_zope$interface$interfaces$$$function__59___init__,
    impl_zope$interface$interfaces$$$function__70___repr__,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_zope$interface$interfaces);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_zope$interface$interfaces,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_zope$interface$interfaces,
        sizeof(function_table_zope$interface$interfaces) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_zope$interface$interfaces(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("zope$interface$interfaces");

    // Store the module for future use.
    module_zope$interface$interfaces = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("zope$interface$interfaces: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("zope$interface$interfaces: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initzope$interface$interfaces\n");

    moduledict_zope$interface$interfaces = MODULE_DICT(module_zope$interface$interfaces);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_zope$interface$interfaces,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_zope$interface$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[414]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_zope$interface$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_zope$interface$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_zope$interface$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_zope$interface$interfaces);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_zope$interface$interfaces);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_20_var___class__ = NULL;
    PyObject *outline_21_var___class__ = NULL;
    PyObject *outline_22_var___class__ = NULL;
    PyObject *outline_23_var___class__ = NULL;
    PyObject *outline_24_var___class__ = NULL;
    PyObject *outline_25_var___class__ = NULL;
    PyObject *outline_26_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__bases_orig = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__bases_orig = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__bases_orig = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__bases_orig = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__bases_orig = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__bases_orig = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__bases_orig = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__bases_orig = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__bases_orig = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__bases_orig = NULL;
    PyObject *tmp_class_creation_23__class_decl_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_23__prepared = NULL;
    PyObject *tmp_class_creation_24__bases = NULL;
    PyObject *tmp_class_creation_24__bases_orig = NULL;
    PyObject *tmp_class_creation_24__class_decl_dict = NULL;
    PyObject *tmp_class_creation_24__metaclass = NULL;
    PyObject *tmp_class_creation_24__prepared = NULL;
    PyObject *tmp_class_creation_25__bases = NULL;
    PyObject *tmp_class_creation_25__bases_orig = NULL;
    PyObject *tmp_class_creation_25__class_decl_dict = NULL;
    PyObject *tmp_class_creation_25__metaclass = NULL;
    PyObject *tmp_class_creation_25__prepared = NULL;
    PyObject *tmp_class_creation_26__bases = NULL;
    PyObject *tmp_class_creation_26__bases_orig = NULL;
    PyObject *tmp_class_creation_26__class_decl_dict = NULL;
    PyObject *tmp_class_creation_26__metaclass = NULL;
    PyObject *tmp_class_creation_26__prepared = NULL;
    PyObject *tmp_class_creation_27__bases = NULL;
    PyObject *tmp_class_creation_27__bases_orig = NULL;
    PyObject *tmp_class_creation_27__class_decl_dict = NULL;
    PyObject *tmp_class_creation_27__metaclass = NULL;
    PyObject *tmp_class_creation_27__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_49517bcfc160cc63b029c7fab051cf23;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_zope$interface$interfaces$$$class__1_IElement_54 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4076d56ca49b83a4ba0b54f19f8d82c7_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_zope$interface$interfaces$$$class__2_IAttribute_149 = NULL;
    struct Nuitka_FrameObject *frame_052996a314ed08171ddb6181cf3ba5c4_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_zope$interface$interfaces$$$class__3_IMethod_157 = NULL;
    struct Nuitka_FrameObject *frame_136075989d8aec5d2437a34f0ab69c4f_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_zope$interface$interfaces$$$class__4_ISpecification_185 = NULL;
    struct Nuitka_FrameObject *frame_dc1a469515eb65487d32acdf4f23462f_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_zope$interface$interfaces$$$class__5_IInterface_260 = NULL;
    struct Nuitka_FrameObject *frame_a3d705b689d7abc012a8d6b1bdab8595_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_zope$interface$interfaces$$$class__6_IDeclaration_404 = NULL;
    struct Nuitka_FrameObject *frame_6c0c47698beb996d881bddd24982353d_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463 = NULL;
    struct Nuitka_FrameObject *frame_efb42f7f6ff8664954adb3bedaaa682a_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805 = NULL;
    struct Nuitka_FrameObject *frame_827c624b3550fff265f19b7e355280ec_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_zope$interface$interfaces$$$class__9_ComponentLookupError_956 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *locals_zope$interface$interfaces$$$class__10_Invalid_959 = NULL;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *locals_zope$interface$interfaces$$$class__11_IObjectEvent_962 = NULL;
    struct Nuitka_FrameObject *frame_5d1cfa19d38fe760cabc775f079e298d_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *locals_zope$interface$interfaces$$$class__12_ObjectEvent_973 = NULL;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *locals_zope$interface$interfaces$$$class__13_IComponentLookup_979 = NULL;
    struct Nuitka_FrameObject *frame_ca246108a193c73d3d7a633444999689_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *locals_zope$interface$interfaces$$$class__14_IRegistration_1060 = NULL;
    struct Nuitka_FrameObject *frame_0d1cf53515b818257c5ee3d754df121d_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075 = NULL;
    struct Nuitka_FrameObject *frame_93cfd8483112e1901ad52c47afcee97d_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083 = NULL;
    struct Nuitka_FrameObject *frame_100d8f0ee06f3a7f631cd1726f063c8b_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *locals_zope$interface$interfaces$$$class__17_IAdapterRegistration_1101 = NULL;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *locals_zope$interface$interfaces$$$class__18_ISubscriptionAdapterRegistration_1105 = NULL;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109 = NULL;
    struct Nuitka_FrameObject *frame_627758dd1158aacbad0b7a1fde720511_15;
    NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *locals_zope$interface$interfaces$$$class__20_IRegistrationEvent_1120 = NULL;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125 = NULL;
    struct Nuitka_FrameObject *frame_cec6a93b7e20f68378b4741bc6e64ec3_16;
    NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *locals_zope$interface$interfaces$$$class__22_IRegistered_1131 = NULL;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *locals_zope$interface$interfaces$$$class__23_Registered_1136 = NULL;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *locals_zope$interface$interfaces$$$class__24_IUnregistered_1139 = NULL;
    PyObject *exception_keeper_type_70;
    PyObject *exception_keeper_value_70;
    PyTracebackObject *exception_keeper_tb_70;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
    PyObject *exception_keeper_type_71;
    PyObject *exception_keeper_value_71;
    PyTracebackObject *exception_keeper_tb_71;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
    PyObject *exception_keeper_type_72;
    PyObject *exception_keeper_value_72;
    PyTracebackObject *exception_keeper_tb_72;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
    PyObject *locals_zope$interface$interfaces$$$class__25_Unregistered_1144 = NULL;
    PyObject *exception_keeper_type_73;
    PyObject *exception_keeper_value_73;
    PyTracebackObject *exception_keeper_tb_73;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
    PyObject *exception_keeper_type_74;
    PyObject *exception_keeper_value_74;
    PyTracebackObject *exception_keeper_tb_74;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
    PyObject *exception_keeper_type_75;
    PyObject *exception_keeper_value_75;
    PyTracebackObject *exception_keeper_tb_75;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
    PyObject *locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149 = NULL;
    struct Nuitka_FrameObject *frame_f78e9333d9a08fe1610642a108267930_17;
    NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
    PyObject *exception_keeper_type_76;
    PyObject *exception_keeper_value_76;
    PyTracebackObject *exception_keeper_tb_76;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;
    PyObject *exception_keeper_type_77;
    PyObject *exception_keeper_value_77;
    PyTracebackObject *exception_keeper_tb_77;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_77;
    PyObject *exception_keeper_type_78;
    PyObject *exception_keeper_value_78;
    PyTracebackObject *exception_keeper_tb_78;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_78;
    PyObject *locals_zope$interface$interfaces$$$class__27_IComponents_1475 = NULL;
    PyObject *exception_keeper_type_79;
    PyObject *exception_keeper_value_79;
    PyTracebackObject *exception_keeper_tb_79;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_79;
    PyObject *exception_keeper_type_80;
    PyObject *exception_keeper_value_80;
    PyTracebackObject *exception_keeper_tb_80;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_80;
    PyObject *exception_keeper_type_81;
    PyObject *exception_keeper_value_81;
    PyTracebackObject *exception_keeper_tb_81;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_81;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[3];
        UPDATE_STRING_DICT0(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_2);
    }
    frame_49517bcfc160cc63b029c7fab051cf23 = MAKE_MODULE_FRAME(codeobj_49517bcfc160cc63b029c7fab051cf23, module_zope$interface$interfaces);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_49517bcfc160cc63b029c7fab051cf23);
    assert(Py_REFCNT(frame_49517bcfc160cc63b029c7fab051cf23) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_zope$interface$interfaces;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[14];
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 18;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_zope$interface$interfaces,
                mod_consts[15],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[12];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_zope$interface$interfaces;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[16];
        tmp_level_value_2 = mod_consts[14];
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 19;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_zope$interface$interfaces,
                mod_consts[17],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[18];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_zope$interface$interfaces;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[19];
        tmp_level_value_3 = mod_consts[14];
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 20;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_zope$interface$interfaces,
                mod_consts[20],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = LIST_COPY(mod_consts[21]);
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        tmp_assign_source_9 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_9, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_12 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[24];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 54;
        tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_4 = mod_consts[2];
        tmp_default_value_1 = mod_consts[27];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_4, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[2]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 54;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_zope$interface$interfaces$$$class__1_IElement_54 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[24];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_3;
        }
        frame_4076d56ca49b83a4ba0b54f19f8d82c7_2 = MAKE_CLASS_FRAME(tstate, codeobj_4076d56ca49b83a4ba0b54f19f8d82c7, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4076d56ca49b83a4ba0b54f19f8d82c7_2);
        assert(Py_REFCNT(frame_4076d56ca49b83a4ba0b54f19f8d82c7_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_2;
            tmp_called_value_2 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[15]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_4076d56ca49b83a4ba0b54f19f8d82c7_2->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[32]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            tmp_called_value_3 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[15]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_4076d56ca49b83a4ba0b54f19f8d82c7_2->m_frame.f_lineno = 73;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_3, mod_consts[33]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__1_getTaggedValue();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[35], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[37];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__2_queryTaggedValue(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__3_getTaggedValueTags();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__4_setTaggedValue();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[45], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__5_getDirectTaggedValue();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[48], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[37];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__6_queryDirectTaggedValue(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__7_getDirectTaggedValueTags();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[54], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4076d56ca49b83a4ba0b54f19f8d82c7_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4076d56ca49b83a4ba0b54f19f8d82c7_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4076d56ca49b83a4ba0b54f19f8d82c7_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4076d56ca49b83a4ba0b54f19f8d82c7_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_4076d56ca49b83a4ba0b54f19f8d82c7_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__1_IElement_54, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[24];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_zope$interface$interfaces$$$class__1_IElement_54;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 54;
            tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__1_IElement_54);
        locals_zope$interface$interfaces$$$class__1_IElement_54 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__1_IElement_54);
        locals_zope$interface$interfaces$$$class__1_IElement_54 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 54;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_15);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        tmp_assign_source_17 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_18 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[14];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_20 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[23]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        tmp_tuple_element_6 = mod_consts[57];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 149;
        tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_name_value_5 = mod_consts[2];
        tmp_default_value_2 = mod_consts[27];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_5, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[2]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 149;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_22;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_zope$interface$interfaces$$$class__2_IAttribute_149 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__2_IAttribute_149, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__2_IAttribute_149, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__2_IAttribute_149, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_6;
        }
        frame_052996a314ed08171ddb6181cf3ba5c4_3 = MAKE_CLASS_FRAME(tstate, codeobj_052996a314ed08171ddb6181cf3ba5c4, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_052996a314ed08171ddb6181cf3ba5c4_3);
        assert(Py_REFCNT(frame_052996a314ed08171ddb6181cf3ba5c4_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_6;
            tmp_called_value_6 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__2_IAttribute_149, mod_consts[15]);

            if (tmp_called_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_6 == NULL)) {
                        tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 152;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_052996a314ed08171ddb6181cf3ba5c4_3->m_frame.f_lineno = 152;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_6, mod_consts[59]);

            Py_DECREF(tmp_called_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__2_IAttribute_149, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_052996a314ed08171ddb6181cf3ba5c4_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_052996a314ed08171ddb6181cf3ba5c4_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_052996a314ed08171ddb6181cf3ba5c4_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_052996a314ed08171ddb6181cf3ba5c4_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_052996a314ed08171ddb6181cf3ba5c4_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__2_IAttribute_149, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_7 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[57];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_zope$interface$interfaces$$$class__2_IAttribute_149;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 149;
            tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_23 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__2_IAttribute_149);
        locals_zope$interface$interfaces$$$class__2_IAttribute_149 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__2_IAttribute_149);
        locals_zope$interface$interfaces$$$class__2_IAttribute_149 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 149;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_23);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_26 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_13 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[14];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[23]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        tmp_tuple_element_10 = mod_consts[61];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 157;
        tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_16 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_17 = tmp_class_creation_3__metaclass;
        tmp_name_value_6 = mod_consts[2];
        tmp_default_value_3 = mod_consts[27];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_6, tmp_default_value_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[2]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 157;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_30;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_zope$interface$interfaces$$$class__3_IMethod_157 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__3_IMethod_157, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[62];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__3_IMethod_157, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__3_IMethod_157, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_9;
        }
        frame_136075989d8aec5d2437a34f0ab69c4f_4 = MAKE_CLASS_FRAME(tstate, codeobj_136075989d8aec5d2437a34f0ab69c4f, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_136075989d8aec5d2437a34f0ab69c4f_4);
        assert(Py_REFCNT(frame_136075989d8aec5d2437a34f0ab69c4f_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__8_getSignatureInfo();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__3_IMethod_157, mod_consts[64], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__9_getSignatureString();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__3_IMethod_157, mod_consts[67], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_136075989d8aec5d2437a34f0ab69c4f_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_136075989d8aec5d2437a34f0ab69c4f_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_136075989d8aec5d2437a34f0ab69c4f_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_136075989d8aec5d2437a34f0ab69c4f_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_136075989d8aec5d2437a34f0ab69c4f_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__3_IMethod_157, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_9 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[61];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_zope$interface$interfaces$$$class__3_IMethod_157;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 157;
            tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_31 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__3_IMethod_157);
        locals_zope$interface$interfaces$$$class__3_IMethod_157 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__3_IMethod_157);
        locals_zope$interface$interfaces$$$class__3_IMethod_157 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 157;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_31);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_13;
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_34 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_19 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[14];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_20 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_21 = tmp_class_creation_4__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[23]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        tmp_tuple_element_14 = mod_consts[69];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_14 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 185;
        tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_22 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_23 = tmp_class_creation_4__metaclass;
        tmp_name_value_7 = mod_consts[2];
        tmp_default_value_4 = mod_consts[27];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_7, tmp_default_value_4);
        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[2]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 185;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_38;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_zope$interface$interfaces$$$class__4_ISpecification_185 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[70];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_12;
        }
        frame_dc1a469515eb65487d32acdf4f23462f_5 = MAKE_CLASS_FRAME(tstate, codeobj_dc1a469515eb65487d32acdf4f23462f, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_dc1a469515eb65487d32acdf4f23462f_5);
        assert(Py_REFCNT(frame_dc1a469515eb65487d32acdf4f23462f_5) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__10_providedBy();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__11_implementedBy();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[75], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__12_isOrExtends();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[78], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[80];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__13_extends(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[82], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[37];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__14_weakref(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_11;
            tmp_called_value_11 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[15]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_dc1a469515eb65487d32acdf4f23462f_5->m_frame.f_lineno = 227;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[87]);

            Py_DECREF(tmp_called_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_12;
            tmp_called_value_12 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[15]);

            if (tmp_called_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_12 == NULL)) {
                        tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 234;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_12);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_dc1a469515eb65487d32acdf4f23462f_5->m_frame.f_lineno = 234;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[89]);

            Py_DECREF(tmp_called_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[90], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_13;
            tmp_called_value_13 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[15]);

            if (tmp_called_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_13 == NULL)) {
                        tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 243;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_13);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_dc1a469515eb65487d32acdf4f23462f_5->m_frame.f_lineno = 243;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[91]);

            Py_DECREF(tmp_called_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[37];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__15_get(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dc1a469515eb65487d32acdf4f23462f_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dc1a469515eb65487d32acdf4f23462f_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dc1a469515eb65487d32acdf4f23462f_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dc1a469515eb65487d32acdf4f23462f_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_dc1a469515eb65487d32acdf4f23462f_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__4_ISpecification_185, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_14 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_16 = mod_consts[69];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_16 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_zope$interface$interfaces$$$class__4_ISpecification_185;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 185;
            tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_39 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__4_ISpecification_185);
        locals_zope$interface$interfaces$$$class__4_ISpecification_185 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__4_ISpecification_185);
        locals_zope$interface$interfaces$$$class__4_ISpecification_185 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 185;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_39);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_17;
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        tmp_assign_source_41 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_17);
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_41, 1, tmp_tuple_element_17);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_assign_source_41);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_42 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_25 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[14];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_26 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_27 = tmp_class_creation_5__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[23]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        tmp_tuple_element_18 = mod_consts[96];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_18 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 260;
        tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_28 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_29 = tmp_class_creation_5__metaclass;
        tmp_name_value_8 = mod_consts[2];
        tmp_default_value_5 = mod_consts[27];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_8, tmp_default_value_5);
        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[2]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 260;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_46;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_zope$interface$interfaces$$$class__5_IInterface_260 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_15;
        }
        frame_a3d705b689d7abc012a8d6b1bdab8595_6 = MAKE_CLASS_FRAME(tstate, codeobj_a3d705b689d7abc012a8d6b1bdab8595, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_a3d705b689d7abc012a8d6b1bdab8595_6);
        assert(Py_REFCNT(frame_a3d705b689d7abc012a8d6b1bdab8595_6) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[98];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__16_names(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[98];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__17_namesAndDescriptions(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[103], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__18___getitem__();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[25], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__19_direct();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[108], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = mod_consts[37];
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__20_validateInvariants(tmp_defaults_8);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__21___contains__();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[114], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__22___iter__();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        {
            PyObject *tmp_called_value_16;
            tmp_called_value_16 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[15]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 401;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_a3d705b689d7abc012a8d6b1bdab8595_6->m_frame.f_lineno = 401;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[119]);

            Py_DECREF(tmp_called_value_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 401;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 401;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a3d705b689d7abc012a8d6b1bdab8595_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a3d705b689d7abc012a8d6b1bdab8595_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a3d705b689d7abc012a8d6b1bdab8595_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a3d705b689d7abc012a8d6b1bdab8595_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_a3d705b689d7abc012a8d6b1bdab8595_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__5_IInterface_260, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_15;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_17 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_20 = mod_consts[96];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_20 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_zope$interface$interfaces$$$class__5_IInterface_260;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 260;
            tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_47 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__5_IInterface_260);
        locals_zope$interface$interfaces$$$class__5_IInterface_260 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__5_IInterface_260);
        locals_zope$interface$interfaces$$$class__5_IInterface_260 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 260;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_47);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_tuple_element_21;
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        tmp_assign_source_49 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_50 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_31 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[14];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_52 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_52;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_32 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_33 = tmp_class_creation_6__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[23]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        tmp_tuple_element_22 = mod_consts[120];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_22 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 404;
        tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_53;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_34 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_35 = tmp_class_creation_6__metaclass;
        tmp_name_value_9 = mod_consts[2];
        tmp_default_value_6 = mod_consts[27];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_9, tmp_default_value_6);
        if (tmp_tuple_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[2]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 404;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_54;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_55;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_zope$interface$interfaces$$$class__6_IDeclaration_404 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__6_IDeclaration_404, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__6_IDeclaration_404, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__6_IDeclaration_404, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_18;
        }
        frame_6c0c47698beb996d881bddd24982353d_7 = MAKE_CLASS_FRAME(tstate, codeobj_6c0c47698beb996d881bddd24982353d, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6c0c47698beb996d881bddd24982353d_7);
        assert(Py_REFCNT(frame_6c0c47698beb996d881bddd24982353d_7) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__23___contains__();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__6_IDeclaration_404, mod_consts[114], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__24___iter__();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__6_IDeclaration_404, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__25_flattened();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__6_IDeclaration_404, mod_consts[127], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__26___sub__();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__6_IDeclaration_404, mod_consts[130], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__27___add__();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__6_IDeclaration_404, mod_consts[133], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__28___nonzero__();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__6_IDeclaration_404, mod_consts[136], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6c0c47698beb996d881bddd24982353d_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6c0c47698beb996d881bddd24982353d_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6c0c47698beb996d881bddd24982353d_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6c0c47698beb996d881bddd24982353d_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_6c0c47698beb996d881bddd24982353d_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_18;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__6_IDeclaration_404, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_18;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_19 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_24 = mod_consts[120];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_24 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_zope$interface$interfaces$$$class__6_IDeclaration_404;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 404;
            tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_56;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_55 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_55);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__6_IDeclaration_404);
        locals_zope$interface$interfaces$$$class__6_IDeclaration_404 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__6_IDeclaration_404);
        locals_zope$interface$interfaces$$$class__6_IDeclaration_404 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 404;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_55);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_tuple_element_25;
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_25 == NULL)) {
            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        tmp_assign_source_57 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_25);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_58 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_37 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[14];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_60 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_60;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_38 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_39 = tmp_class_creation_7__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[23]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        tmp_tuple_element_26 = mod_consts[138];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_26 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 463;
        tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_61;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_40 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_41 = tmp_class_creation_7__metaclass;
        tmp_name_value_10 = mod_consts[2];
        tmp_default_value_7 = mod_consts[27];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_10, tmp_default_value_7);
        if (tmp_tuple_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_42;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_42 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[2]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 463;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 463;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_62;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_63;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[138];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_21;
        }
        frame_efb42f7f6ff8664954adb3bedaaa682a_8 = MAKE_CLASS_FRAME(tstate, codeobj_efb42f7f6ff8664954adb3bedaaa682a, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_efb42f7f6ff8664954adb3bedaaa682a_8);
        assert(Py_REFCNT(frame_efb42f7f6ff8664954adb3bedaaa682a_8) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_21;
            tmp_called_value_21 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[15]);

            if (tmp_called_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_21 == NULL)) {
                        tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 494;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_value_21);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_efb42f7f6ff8664954adb3bedaaa682a_8->m_frame.f_lineno = 494;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_21, mod_consts[140]);

            Py_DECREF(tmp_called_value_21);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__29_taggedValue();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[142], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__30_invariant();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[145], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__31_interfacemethod();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[148], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__32_providedBy();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__33_implementedBy();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[75], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__34_classImplements();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[155], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__35_classImplementsFirst();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[158], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 619;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__36_implementer();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[20], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__37_classImplementsOnly();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[163], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__38_implementer_only();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[166], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__39_directlyProvidedBy();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[169], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__40_directlyProvides();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__41_alsoProvides();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[175], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__42_noLongerProvides();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[178], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 737;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__43_provider();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[181], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 757;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__44_moduleProvides();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[184], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 764;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__45_Declaration();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[187], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 792;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_efb42f7f6ff8664954adb3bedaaa682a_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_efb42f7f6ff8664954adb3bedaaa682a_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_efb42f7f6ff8664954adb3bedaaa682a_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_efb42f7f6ff8664954adb3bedaaa682a_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_efb42f7f6ff8664954adb3bedaaa682a_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_21;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 463;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto try_except_handler_21;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_22 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_28 = mod_consts[138];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_28 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 463;
            tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 463;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_64;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_63 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_63);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463);
        locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463);
        locals_zope$interface$interfaces$$$class__7_IInterfaceDeclaration_463 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 463;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_63);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_tuple_element_29;
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        tmp_assign_source_65 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_65, 0, tmp_tuple_element_29);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_66 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_43 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[14];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_68 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_68;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_44 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_45 = tmp_class_creation_8__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[23]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        tmp_tuple_element_30 = mod_consts[189];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_30 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 805;
        tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_69;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_46 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_47 = tmp_class_creation_8__metaclass;
        tmp_name_value_11 = mod_consts[2];
        tmp_default_value_8 = mod_consts[27];
        tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_11, tmp_default_value_8);
        if (tmp_tuple_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_48 == NULL));
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[2]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 805;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 805;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_70;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_71;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[189];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_24;
        }
        frame_827c624b3550fff265f19b7e355280ec_9 = MAKE_CLASS_FRAME(tstate, codeobj_827c624b3550fff265f19b7e355280ec, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_827c624b3550fff265f19b7e355280ec_9);
        assert(Py_REFCNT(frame_827c624b3550fff265f19b7e355280ec_9) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__46_register();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[192], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = mod_consts[194];
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__47_registered(tmp_defaults_9);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[196], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 824;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_defaults_10;
            tmp_defaults_10 = mod_consts[198];
            Py_INCREF(tmp_defaults_10);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__48_lookup(tmp_defaults_10);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[200], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 838;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_defaults_11;
            tmp_defaults_11 = mod_consts[198];
            Py_INCREF(tmp_defaults_11);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__49_queryMultiAdapter(tmp_defaults_11);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[203], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 846;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_defaults_12;
            tmp_defaults_12 = mod_consts[198];
            Py_INCREF(tmp_defaults_12);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__50_lookup1(tmp_defaults_12);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[206], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 850;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_defaults_13;
            tmp_defaults_13 = mod_consts[198];
            Py_INCREF(tmp_defaults_13);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__51_queryAdapter(tmp_defaults_13);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[209], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 858;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_defaults_14;
            tmp_defaults_14 = mod_consts[198];
            Py_INCREF(tmp_defaults_14);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__52_adapter_hook(tmp_defaults_14);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[212], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 862;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__53_lookupAll();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[215], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 868;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__54_names();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[100], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 874;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__55_subscribe();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[220], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 878;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__56_subscribed();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[223], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 892;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__57_subscriptions();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[226], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 912;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__58_subscribers();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[229], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 927;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_827c624b3550fff265f19b7e355280ec_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_827c624b3550fff265f19b7e355280ec_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_827c624b3550fff265f19b7e355280ec_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_827c624b3550fff265f19b7e355280ec_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_827c624b3550fff265f19b7e355280ec_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_24;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 805;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto try_except_handler_24;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_24 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_32 = mod_consts[189];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_32 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 805;
            tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 805;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_72;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_71 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_71);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805);
        locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805);
        locals_zope$interface$interfaces$$$class__8_IAdapterRegistry_805 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 805;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_71);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_dircall_arg1_9;
        tmp_dircall_arg1_9 = mod_consts[231];
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_73 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_25;
        }
        tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_49 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[14];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_25;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_75 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_75;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_50 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_25;
        }
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_51 = tmp_class_creation_9__metaclass;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[23]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_25;
        }
        tmp_tuple_element_33 = mod_consts[232];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_33 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 956;
        tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_76;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_52 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_25;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_53 = tmp_class_creation_9__metaclass;
        tmp_name_value_12 = mod_consts[2];
        tmp_default_value_9 = mod_consts[27];
        tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_12, tmp_default_value_9);
        if (tmp_tuple_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_54;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_54 == NULL));
            tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[2]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 956;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 956;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_77;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_78;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_zope$interface$interfaces$$$class__9_ComponentLookupError_956 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__9_ComponentLookupError_956, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[233];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__9_ComponentLookupError_956, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[232];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__9_ComponentLookupError_956, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_27;
        }
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            tmp_cmp_expr_right_9 = mod_consts[231];
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 956;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        tmp_dictset_value = mod_consts[231];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__9_ComponentLookupError_956, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto try_except_handler_27;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_26 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_35 = mod_consts[232];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_35 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = locals_zope$interface$interfaces$$$class__9_ComponentLookupError_956;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 956;
            tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 956;

                goto try_except_handler_27;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_79;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_78 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_78);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__9_ComponentLookupError_956);
        locals_zope$interface$interfaces$$$class__9_ComponentLookupError_956 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__9_ComponentLookupError_956);
        locals_zope$interface$interfaces$$$class__9_ComponentLookupError_956 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 956;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_78);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_dircall_arg1_10;
        tmp_dircall_arg1_10 = mod_consts[234];
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_80 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_37;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_28;
        }
        tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_55 = tmp_class_creation_10__bases;
        tmp_subscript_value_10 = mod_consts[14];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_28;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_28;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_82 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_38;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_56 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_28;
        }
        tmp_condition_result_38 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_57 = tmp_class_creation_10__metaclass;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[23]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_28;
        }
        tmp_tuple_element_36 = mod_consts[235];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_36 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 959;
        tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_83;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_58 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_28;
        }
        tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_59 = tmp_class_creation_10__metaclass;
        tmp_name_value_13 = mod_consts[2];
        tmp_default_value_10 = mod_consts[27];
        tmp_tuple_element_37 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_13, tmp_default_value_10);
        if (tmp_tuple_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_28;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_60 == NULL));
            tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[2]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 959;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 959;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_84;
    }
    branch_end_28:;
    {
        PyObject *tmp_assign_source_85;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_zope$interface$interfaces$$$class__10_Invalid_959 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__10_Invalid_959, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[236];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__10_Invalid_959, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[235];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__10_Invalid_959, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_30;
        }
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_10__bases;
            tmp_cmp_expr_right_10 = mod_consts[234];
            tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 959;

                goto try_except_handler_30;
            }
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        tmp_dictset_value = mod_consts[234];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__10_Invalid_959, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto try_except_handler_30;
        }
        branch_no_30:;
        {
            PyObject *tmp_assign_source_86;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_28 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_38 = mod_consts[235];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_38 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = locals_zope$interface$interfaces$$$class__10_Invalid_959;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 959;
            tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 959;

                goto try_except_handler_30;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_86;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_85 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_85);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__10_Invalid_959);
        locals_zope$interface$interfaces$$$class__10_Invalid_959 = NULL;
        goto try_return_handler_29;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__10_Invalid_959);
        locals_zope$interface$interfaces$$$class__10_Invalid_959 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto try_except_handler_29;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 959;
        goto try_except_handler_28;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_85);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_tuple_element_39;
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_39 == NULL)) {
            tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        tmp_assign_source_87 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_39);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_88 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_metaclass_value_11;
        nuitka_bool tmp_condition_result_41;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_11;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_61 = tmp_class_creation_11__bases;
        tmp_subscript_value_11 = mod_consts[14];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_90 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_90;
    }
    {
        bool tmp_condition_result_42;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_62 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        tmp_condition_result_42 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_63 = tmp_class_creation_11__metaclass;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[23]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        tmp_tuple_element_40 = mod_consts[237];
        tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_40 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 962;
        tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_91;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_64 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_65 = tmp_class_creation_11__metaclass;
        tmp_name_value_14 = mod_consts[2];
        tmp_default_value_11 = mod_consts[27];
        tmp_tuple_element_41 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_14, tmp_default_value_11);
        if (tmp_tuple_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_66;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_66 == NULL));
            tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[2]);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 962;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_41);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_31;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_31;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 962;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_31;
    }
    branch_no_32:;
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_92;
    }
    branch_end_31:;
    {
        PyObject *tmp_assign_source_93;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_zope$interface$interfaces$$$class__11_IObjectEvent_962 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__11_IObjectEvent_962, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[238];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__11_IObjectEvent_962, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[237];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__11_IObjectEvent_962, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_33;
        }
        frame_5d1cfa19d38fe760cabc775f079e298d_10 = MAKE_CLASS_FRAME(tstate, codeobj_5d1cfa19d38fe760cabc775f079e298d, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5d1cfa19d38fe760cabc775f079e298d_10);
        assert(Py_REFCNT(frame_5d1cfa19d38fe760cabc775f079e298d_10) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_30;
            tmp_called_value_30 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__11_IObjectEvent_962, mod_consts[15]);

            if (tmp_called_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_30 == NULL)) {
                        tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 969;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_value_30);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_5d1cfa19d38fe760cabc775f079e298d_10->m_frame.f_lineno = 969;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_30, mod_consts[239]);

            Py_DECREF(tmp_called_value_30);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 969;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__11_IObjectEvent_962, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 969;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5d1cfa19d38fe760cabc775f079e298d_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5d1cfa19d38fe760cabc775f079e298d_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5d1cfa19d38fe760cabc775f079e298d_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5d1cfa19d38fe760cabc775f079e298d_10,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_5d1cfa19d38fe760cabc775f079e298d_10);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_33;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_44;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 962;

                goto try_except_handler_33;
            }
            if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
                goto branch_yes_33;
            } else {
                goto branch_no_33;
            }
        }
        branch_yes_33:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__11_IObjectEvent_962, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 962;

            goto try_except_handler_33;
        }
        branch_no_33:;
        {
            PyObject *tmp_assign_source_94;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_31 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_42 = mod_consts[237];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_42 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = locals_zope$interface$interfaces$$$class__11_IObjectEvent_962;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 962;
            tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 962;

                goto try_except_handler_33;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_94;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_93 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_93);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__11_IObjectEvent_962);
        locals_zope$interface$interfaces$$$class__11_IObjectEvent_962 = NULL;
        goto try_return_handler_32;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__11_IObjectEvent_962);
        locals_zope$interface$interfaces$$$class__11_IObjectEvent_962 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto try_except_handler_32;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 962;
        goto try_except_handler_31;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_93);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_96;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_32;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 972;

            goto try_except_handler_34;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[237]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[237]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 972;

            goto try_except_handler_34;
        }
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 972;
        tmp_called_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_1);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 972;

            goto try_except_handler_34;
        }
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_zope$interface$interfaces$$$class__12_ObjectEvent_973 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyDict_SetItem(locals_zope$interface$interfaces$$$class__12_ObjectEvent_973, mod_consts[29], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[240];
        tmp_res = PyDict_SetItem(locals_zope$interface$interfaces$$$class__12_ObjectEvent_973, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__59___init__();

        tmp_res = PyDict_SetItem(locals_zope$interface$interfaces$$$class__12_ObjectEvent_973, mod_consts[241], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_98;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_value_23;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_kwargs_value_23;
            tmp_called_value_34 = (PyObject *)&PyType_Type;
            tmp_tuple_element_43 = mod_consts[240];
            tmp_args_value_23 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_43);
            tmp_tuple_element_43 = mod_consts[243];
            PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_43);
            tmp_tuple_element_43 = locals_zope$interface$interfaces$$$class__12_ObjectEvent_973;
            PyTuple_SET_ITEM0(tmp_args_value_23, 2, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_23 = tmp_class_creation_12__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 973;
            tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_23, tmp_kwargs_value_23);
            Py_DECREF(tmp_args_value_23);
            if (tmp_assign_source_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 973;

                goto try_except_handler_36;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_98;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_args_element_value_2 = outline_11_var___class__;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_36;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__12_ObjectEvent_973);
        locals_zope$interface$interfaces$$$class__12_ObjectEvent_973 = NULL;
        goto try_return_handler_35;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__12_ObjectEvent_973);
        locals_zope$interface$interfaces$$$class__12_ObjectEvent_973 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto try_except_handler_35;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 973;
        goto try_except_handler_34;
        outline_result_12:;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 972;
        tmp_assign_source_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 972;

            goto try_except_handler_34;
        }
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_97);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_tuple_element_44;
        tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_44 == NULL)) {
            tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        tmp_assign_source_99 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_99, 0, tmp_tuple_element_44);
        assert(tmp_class_creation_13__bases_orig == NULL);
        tmp_class_creation_13__bases_orig = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_dircall_arg1_12;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dircall_arg1_12 = tmp_class_creation_13__bases_orig;
        Py_INCREF(tmp_dircall_arg1_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_assign_source_100 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_metaclass_value_12;
        nuitka_bool tmp_condition_result_45;
        int tmp_truth_name_12;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_12;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_12 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_value_67 = tmp_class_creation_13__bases;
        tmp_subscript_value_12 = mod_consts[14];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_67, tmp_subscript_value_12, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_12);
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_value_12 = tmp_class_creation_13__bases;
        tmp_assign_source_102 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_102;
    }
    {
        bool tmp_condition_result_46;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_68 = tmp_class_creation_13__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        tmp_condition_result_46 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_46 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_value_24;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_kwargs_value_24;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_69 = tmp_class_creation_13__metaclass;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[23]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        tmp_tuple_element_45 = mod_consts[244];
        tmp_args_value_24 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_45);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_45 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_45);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_24 = tmp_class_creation_13__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 979;
        tmp_assign_source_103 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_24, tmp_kwargs_value_24);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_value_24);
        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_103;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_70 = tmp_class_creation_13__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_name_value_15;
        PyObject *tmp_default_value_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_mod_expr_left_12 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_71 = tmp_class_creation_13__metaclass;
        tmp_name_value_15 = mod_consts[2];
        tmp_default_value_12 = mod_consts[27];
        tmp_tuple_element_46 = BUILTIN_GETATTR(tstate, tmp_expression_value_71, tmp_name_value_15, tmp_default_value_12);
        if (tmp_tuple_element_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_72;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_24 = tmp_class_creation_13__prepared;
            tmp_expression_value_72 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_value_72 == NULL));
            tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[2]);
            Py_DECREF(tmp_expression_value_72);
            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 979;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_46);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_12);
        goto try_except_handler_37;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        Py_DECREF(tmp_mod_expr_right_12);
        if (tmp_raise_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_37;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 979;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_37;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_104;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_105;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_zope$interface$interfaces$$$class__13_IComponentLookup_979 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_39;
        }
        tmp_dictset_value = mod_consts[245];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_39;
        }
        tmp_dictset_value = mod_consts[244];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_39;
        }
        frame_ca246108a193c73d3d7a633444999689_11 = MAKE_CLASS_FRAME(tstate, codeobj_ca246108a193c73d3d7a633444999689, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_ca246108a193c73d3d7a633444999689_11);
        assert(Py_REFCNT(frame_ca246108a193c73d3d7a633444999689_11) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_36;
            tmp_called_value_36 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[15]);

            if (tmp_called_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_36 == NULL)) {
                        tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 986;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_value_36);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_ca246108a193c73d3d7a633444999689_11->m_frame.f_lineno = 986;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_36, mod_consts[246]);

            Py_DECREF(tmp_called_value_36);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 986;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[247], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 986;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_value_37;
            tmp_called_value_37 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[15]);

            if (tmp_called_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_37 == NULL)) {
                        tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 989;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_value_37);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            frame_ca246108a193c73d3d7a633444999689_11->m_frame.f_lineno = 989;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_37, mod_consts[248]);

            Py_DECREF(tmp_called_value_37);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 989;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[249], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 989;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_defaults_15;
            tmp_defaults_15 = mod_consts[198];
            Py_INCREF(tmp_defaults_15);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__60_queryAdapter(tmp_defaults_15);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[209], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 992;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_defaults_16;
            tmp_defaults_16 = mod_consts[194];
            Py_INCREF(tmp_defaults_16);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__61_getAdapter(tmp_defaults_16);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[253], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 998;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_defaults_17;
            tmp_defaults_17 = mod_consts[198];
            Py_INCREF(tmp_defaults_17);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__62_queryMultiAdapter(tmp_defaults_17);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[203], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1005;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_defaults_18;
            tmp_defaults_18 = mod_consts[194];
            Py_INCREF(tmp_defaults_18);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__63_getMultiAdapter(tmp_defaults_18);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[258], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1011;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__64_getAdapters();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[261], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1018;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__65_subscribers();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[229], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1025;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__66_handle();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[266], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1033;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }
        {
            PyObject *tmp_defaults_19;
            tmp_defaults_19 = mod_consts[198];
            Py_INCREF(tmp_defaults_19);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__67_queryUtility(tmp_defaults_19);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[269], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1039;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__68_getUtilitiesFor();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[272], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1045;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__69_getAllUtilitiesRegisteredFor();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[275], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ca246108a193c73d3d7a633444999689_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ca246108a193c73d3d7a633444999689_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ca246108a193c73d3d7a633444999689_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ca246108a193c73d3d7a633444999689_11,
            type_description_2,
            outline_12_var___class__
        );



        assertFrameObject(frame_ca246108a193c73d3d7a633444999689_11);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_39;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_cmp_expr_left_12 = tmp_class_creation_13__bases;
            CHECK_OBJECT(tmp_class_creation_13__bases_orig);
            tmp_cmp_expr_right_12 = tmp_class_creation_13__bases_orig;
            tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 979;

                goto try_except_handler_39;
            }
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
        }
        branch_yes_36:;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dictset_value = tmp_class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto try_except_handler_39;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_106;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_25;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_kwargs_value_25;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_38 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_47 = mod_consts[244];
            tmp_args_value_25 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_47 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_47);
            tmp_tuple_element_47 = locals_zope$interface$interfaces$$$class__13_IComponentLookup_979;
            PyTuple_SET_ITEM0(tmp_args_value_25, 2, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_25 = tmp_class_creation_13__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 979;
            tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_25, tmp_kwargs_value_25);
            Py_DECREF(tmp_args_value_25);
            if (tmp_assign_source_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 979;

                goto try_except_handler_39;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_106;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_105 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_105);
        goto try_return_handler_39;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979);
        locals_zope$interface$interfaces$$$class__13_IComponentLookup_979 = NULL;
        goto try_return_handler_38;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__13_IComponentLookup_979);
        locals_zope$interface$interfaces$$$class__13_IComponentLookup_979 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto try_except_handler_38;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 979;
        goto try_except_handler_37;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_105);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_13__bases_orig);
    Py_DECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_tuple_element_48;
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_48 == NULL)) {
            tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        tmp_assign_source_107 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_107, 0, tmp_tuple_element_48);
        assert(tmp_class_creation_14__bases_orig == NULL);
        tmp_class_creation_14__bases_orig = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_dircall_arg1_13;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dircall_arg1_13 = tmp_class_creation_14__bases_orig;
        Py_INCREF(tmp_dircall_arg1_13);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
            tmp_assign_source_108 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_metaclass_value_13;
        nuitka_bool tmp_condition_result_49;
        int tmp_truth_name_13;
        PyObject *tmp_type_arg_25;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_13;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
        if (tmp_truth_name_13 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_value_73 = tmp_class_creation_14__bases;
        tmp_subscript_value_13 = mod_consts[14];
        tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_73, tmp_subscript_value_13, 0);
        if (tmp_type_arg_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
        Py_DECREF(tmp_type_arg_25);
        if (tmp_metaclass_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_13);
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_value_13 = tmp_class_creation_14__bases;
        tmp_assign_source_110 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
        Py_DECREF(tmp_metaclass_value_13);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_110;
    }
    {
        bool tmp_condition_result_50;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_74 = tmp_class_creation_14__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        tmp_condition_result_50 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_args_value_26;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_kwargs_value_26;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_75 = tmp_class_creation_14__metaclass;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[23]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        tmp_tuple_element_49 = mod_consts[277];
        tmp_args_value_26 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_49 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_26 = tmp_class_creation_14__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1060;
        tmp_assign_source_111 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_26, tmp_kwargs_value_26);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_value_26);
        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_111;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_76 = tmp_class_creation_14__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_name_value_16;
        PyObject *tmp_default_value_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_mod_expr_left_13 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_77 = tmp_class_creation_14__metaclass;
        tmp_name_value_16 = mod_consts[2];
        tmp_default_value_13 = mod_consts[27];
        tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_77, tmp_name_value_16, tmp_default_value_13);
        if (tmp_tuple_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_78;
            PyObject *tmp_type_arg_26;
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_26 = tmp_class_creation_14__prepared;
            tmp_expression_value_78 = BUILTIN_TYPE1(tmp_type_arg_26);
            assert(!(tmp_expression_value_78 == NULL));
            tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[2]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1060;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_13);
        goto try_except_handler_40;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        Py_DECREF(tmp_mod_expr_right_13);
        if (tmp_raise_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_40;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 1060;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_40;
    }
    branch_no_38:;
    goto branch_end_37;
    branch_no_37:;
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_112;
    }
    branch_end_37:;
    {
        PyObject *tmp_assign_source_113;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_zope$interface$interfaces$$$class__14_IRegistration_1060 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__14_IRegistration_1060, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_42;
        }
        tmp_dictset_value = mod_consts[278];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__14_IRegistration_1060, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_42;
        }
        tmp_dictset_value = mod_consts[277];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__14_IRegistration_1060, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_42;
        }
        frame_0d1cf53515b818257c5ee3d754df121d_12 = MAKE_CLASS_FRAME(tstate, codeobj_0d1cf53515b818257c5ee3d754df121d, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0d1cf53515b818257c5ee3d754df121d_12);
        assert(Py_REFCNT(frame_0d1cf53515b818257c5ee3d754df121d_12) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_40;
            tmp_called_value_40 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__14_IRegistration_1060, mod_consts[15]);

            if (tmp_called_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_40 == NULL)) {
                        tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1064;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_value_40);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            frame_0d1cf53515b818257c5ee3d754df121d_12->m_frame.f_lineno = 1064;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_40, mod_consts[279]);

            Py_DECREF(tmp_called_value_40);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1064;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__14_IRegistration_1060, mod_consts[280], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1064;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_value_41;
            tmp_called_value_41 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__14_IRegistration_1060, mod_consts[15]);

            if (tmp_called_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_41 == NULL)) {
                        tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_41 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1066;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_value_41);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            frame_0d1cf53515b818257c5ee3d754df121d_12->m_frame.f_lineno = 1066;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_41, mod_consts[281]);

            Py_DECREF(tmp_called_value_41);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1066;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__14_IRegistration_1060, mod_consts[282], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1066;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_value_42;
            tmp_called_value_42 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__14_IRegistration_1060, mod_consts[15]);

            if (tmp_called_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_42 == NULL)) {
                        tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1068;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_value_42);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            frame_0d1cf53515b818257c5ee3d754df121d_12->m_frame.f_lineno = 1068;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_42, mod_consts[283]);

            Py_DECREF(tmp_called_value_42);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1068;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__14_IRegistration_1060, mod_consts[284], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1068;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_11;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0d1cf53515b818257c5ee3d754df121d_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0d1cf53515b818257c5ee3d754df121d_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0d1cf53515b818257c5ee3d754df121d_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0d1cf53515b818257c5ee3d754df121d_12,
            type_description_2,
            outline_13_var___class__
        );



        assertFrameObject(frame_0d1cf53515b818257c5ee3d754df121d_12);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_42;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_52;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_cmp_expr_left_13 = tmp_class_creation_14__bases;
            CHECK_OBJECT(tmp_class_creation_14__bases_orig);
            tmp_cmp_expr_right_13 = tmp_class_creation_14__bases_orig;
            tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1060;

                goto try_except_handler_42;
            }
            if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
                goto branch_yes_39;
            } else {
                goto branch_no_39;
            }
        }
        branch_yes_39:;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dictset_value = tmp_class_creation_14__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__14_IRegistration_1060, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto try_except_handler_42;
        }
        branch_no_39:;
        {
            PyObject *tmp_assign_source_114;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_value_27;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_27;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_43 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_51 = mod_consts[277];
            tmp_args_value_27 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_51 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_zope$interface$interfaces$$$class__14_IRegistration_1060;
            PyTuple_SET_ITEM0(tmp_args_value_27, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_27 = tmp_class_creation_14__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1060;
            tmp_assign_source_114 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_27, tmp_kwargs_value_27);
            Py_DECREF(tmp_args_value_27);
            if (tmp_assign_source_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1060;

                goto try_except_handler_42;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_114;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_113 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_113);
        goto try_return_handler_42;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__14_IRegistration_1060);
        locals_zope$interface$interfaces$$$class__14_IRegistration_1060 = NULL;
        goto try_return_handler_41;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__14_IRegistration_1060);
        locals_zope$interface$interfaces$$$class__14_IRegistration_1060 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto try_except_handler_41;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 1060;
        goto try_except_handler_40;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_113);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_14__bases_orig);
    Py_DECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_14__bases);
    Py_DECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_tuple_element_52;
        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[277]);

        if (unlikely(tmp_tuple_element_52 == NULL)) {
            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[277]);
        }

        if (tmp_tuple_element_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        tmp_assign_source_115 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_115, 0, tmp_tuple_element_52);
        assert(tmp_class_creation_15__bases_orig == NULL);
        tmp_class_creation_15__bases_orig = tmp_assign_source_115;
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_dircall_arg1_14;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dircall_arg1_14 = tmp_class_creation_15__bases_orig;
        Py_INCREF(tmp_dircall_arg1_14);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
            tmp_assign_source_116 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_117;
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_metaclass_value_14;
        nuitka_bool tmp_condition_result_53;
        int tmp_truth_name_14;
        PyObject *tmp_type_arg_27;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_14;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
        if (tmp_truth_name_14 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        tmp_condition_result_53 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_value_79 = tmp_class_creation_15__bases;
        tmp_subscript_value_14 = mod_consts[14];
        tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_14, 0);
        if (tmp_type_arg_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
        Py_DECREF(tmp_type_arg_27);
        if (tmp_metaclass_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_14);
        condexpr_end_14:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_value_14 = tmp_class_creation_15__bases;
        tmp_assign_source_118 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
        Py_DECREF(tmp_metaclass_value_14);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_118;
    }
    {
        bool tmp_condition_result_54;
        PyObject *tmp_expression_value_80;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_80 = tmp_class_creation_15__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        tmp_condition_result_54 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_args_value_28;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_kwargs_value_28;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_81 = tmp_class_creation_15__metaclass;
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[23]);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        tmp_tuple_element_53 = mod_consts[285];
        tmp_args_value_28 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_53 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_value_28 = tmp_class_creation_15__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1075;
        tmp_assign_source_119 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_28, tmp_kwargs_value_28);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_value_28);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_119;
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_82;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_value_82 = tmp_class_creation_15__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_55 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_name_value_17;
        PyObject *tmp_default_value_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_mod_expr_left_14 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_83 = tmp_class_creation_15__metaclass;
        tmp_name_value_17 = mod_consts[2];
        tmp_default_value_14 = mod_consts[27];
        tmp_tuple_element_54 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_17, tmp_default_value_14);
        if (tmp_tuple_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_84;
            PyObject *tmp_type_arg_28;
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_28 = tmp_class_creation_15__prepared;
            tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_28);
            assert(!(tmp_expression_value_84 == NULL));
            tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[2]);
            Py_DECREF(tmp_expression_value_84);
            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1075;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_54);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_14);
        goto try_except_handler_43;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        Py_DECREF(tmp_mod_expr_right_14);
        if (tmp_raise_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_43;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 1075;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_43;
    }
    branch_no_41:;
    goto branch_end_40;
    branch_no_40:;
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_120;
    }
    branch_end_40:;
    {
        PyObject *tmp_assign_source_121;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_45;
        }
        tmp_dictset_value = mod_consts[286];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_45;
        }
        tmp_dictset_value = mod_consts[285];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_45;
        }
        frame_93cfd8483112e1901ad52c47afcee97d_13 = MAKE_CLASS_FRAME(tstate, codeobj_93cfd8483112e1901ad52c47afcee97d, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_93cfd8483112e1901ad52c47afcee97d_13);
        assert(Py_REFCNT(frame_93cfd8483112e1901ad52c47afcee97d_13) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_45;
            tmp_called_value_45 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075, mod_consts[15]);

            if (tmp_called_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_45 == NULL)) {
                        tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_45 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1079;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_value_45);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_93cfd8483112e1901ad52c47afcee97d_13->m_frame.f_lineno = 1079;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_45, mod_consts[287]);

            Py_DECREF(tmp_called_value_45);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1079;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075, mod_consts[288], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1079;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_value_46;
            tmp_called_value_46 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075, mod_consts[15]);

            if (tmp_called_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_46 == NULL)) {
                        tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1080;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_value_46);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_93cfd8483112e1901ad52c47afcee97d_13->m_frame.f_lineno = 1080;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_46, mod_consts[289]);

            Py_DECREF(tmp_called_value_46);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1080;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075, mod_consts[290], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1080;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_value_47;
            tmp_called_value_47 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075, mod_consts[15]);

            if (tmp_called_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_47 == NULL)) {
                        tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_47 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1081;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_value_47);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            frame_93cfd8483112e1901ad52c47afcee97d_13->m_frame.f_lineno = 1081;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_47, mod_consts[291]);

            Py_DECREF(tmp_called_value_47);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1081;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075, mod_consts[292], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1081;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_12;
        frame_exception_exit_13:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_93cfd8483112e1901ad52c47afcee97d_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_93cfd8483112e1901ad52c47afcee97d_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_93cfd8483112e1901ad52c47afcee97d_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_93cfd8483112e1901ad52c47afcee97d_13,
            type_description_2,
            outline_14_var___class__
        );



        assertFrameObject(frame_93cfd8483112e1901ad52c47afcee97d_13);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_12;
        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_45;
        skip_nested_handling_12:;
        {
            nuitka_bool tmp_condition_result_56;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_cmp_expr_left_14 = tmp_class_creation_15__bases;
            CHECK_OBJECT(tmp_class_creation_15__bases_orig);
            tmp_cmp_expr_right_14 = tmp_class_creation_15__bases_orig;
            tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1075;

                goto try_except_handler_45;
            }
            if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
                goto branch_yes_42;
            } else {
                goto branch_no_42;
            }
        }
        branch_yes_42:;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dictset_value = tmp_class_creation_15__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1075;

            goto try_except_handler_45;
        }
        branch_no_42:;
        {
            PyObject *tmp_assign_source_122;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_value_29;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_29;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_value_48 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_55 = mod_consts[285];
            tmp_args_value_29 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_55 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075;
            PyTuple_SET_ITEM0(tmp_args_value_29, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_29 = tmp_class_creation_15__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1075;
            tmp_assign_source_122 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_29, tmp_kwargs_value_29);
            Py_DECREF(tmp_args_value_29);
            if (tmp_assign_source_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1075;

                goto try_except_handler_45;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_122;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_assign_source_121 = outline_14_var___class__;
        Py_INCREF(tmp_assign_source_121);
        goto try_return_handler_45;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075);
        locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075 = NULL;
        goto try_return_handler_44;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075);
        locals_zope$interface$interfaces$$$class__15_IUtilityRegistration_1075 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto try_except_handler_44;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_44:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 1075;
        goto try_except_handler_43;
        outline_result_15:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_121);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_15__bases_orig);
    Py_DECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_15__bases);
    Py_DECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_tuple_element_56;
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[277]);

        if (unlikely(tmp_tuple_element_56 == NULL)) {
            tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[277]);
        }

        if (tmp_tuple_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        tmp_assign_source_123 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_123, 0, tmp_tuple_element_56);
        assert(tmp_class_creation_16__bases_orig == NULL);
        tmp_class_creation_16__bases_orig = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_dircall_arg1_15;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dircall_arg1_15 = tmp_class_creation_16__bases_orig;
        Py_INCREF(tmp_dircall_arg1_15);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
            tmp_assign_source_124 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_16__bases == NULL);
        tmp_class_creation_16__bases = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_125;
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_metaclass_value_15;
        nuitka_bool tmp_condition_result_57;
        int tmp_truth_name_15;
        PyObject *tmp_type_arg_29;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_bases_value_15;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_creation_16__bases);
        if (tmp_truth_name_15 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        tmp_condition_result_57 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_expression_value_85 = tmp_class_creation_16__bases;
        tmp_subscript_value_15 = mod_consts[14];
        tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_85, tmp_subscript_value_15, 0);
        if (tmp_type_arg_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
        Py_DECREF(tmp_type_arg_29);
        if (tmp_metaclass_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_15);
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_bases_value_15 = tmp_class_creation_16__bases;
        tmp_assign_source_126 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
        Py_DECREF(tmp_metaclass_value_15);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_126;
    }
    {
        bool tmp_condition_result_58;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_86 = tmp_class_creation_16__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        tmp_condition_result_58 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_58 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_value_30;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_kwargs_value_30;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_87 = tmp_class_creation_16__metaclass;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[23]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        tmp_tuple_element_57 = mod_consts[293];
        tmp_args_value_30 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_tuple_element_57 = tmp_class_creation_16__bases;
        PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_value_30 = tmp_class_creation_16__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1083;
        tmp_assign_source_127 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_30, tmp_kwargs_value_30);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_value_30);
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_127;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_value_88 = tmp_class_creation_16__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_59 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_15;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_name_value_18;
        PyObject *tmp_default_value_15;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_mod_expr_left_15 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_89 = tmp_class_creation_16__metaclass;
        tmp_name_value_18 = mod_consts[2];
        tmp_default_value_15 = mod_consts[27];
        tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_89, tmp_name_value_18, tmp_default_value_15);
        if (tmp_tuple_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_type_arg_30;
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_30 = tmp_class_creation_16__prepared;
            tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_30);
            assert(!(tmp_expression_value_90 == NULL));
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[2]);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1083;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_15);
        goto try_except_handler_46;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        Py_DECREF(tmp_mod_expr_right_15);
        if (tmp_raise_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_46;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_15;
        exception_lineno = 1083;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_46;
    }
    branch_no_44:;
    goto branch_end_43;
    branch_no_43:;
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_128;
    }
    branch_end_43:;
    {
        PyObject *tmp_assign_source_129;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_48;
        }
        tmp_dictset_value = mod_consts[294];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_48;
        }
        tmp_dictset_value = mod_consts[293];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_48;
        }
        frame_100d8f0ee06f3a7f631cd1726f063c8b_14 = MAKE_CLASS_FRAME(tstate, codeobj_100d8f0ee06f3a7f631cd1726f063c8b, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_100d8f0ee06f3a7f631cd1726f063c8b_14);
        assert(Py_REFCNT(frame_100d8f0ee06f3a7f631cd1726f063c8b_14) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_50;
            tmp_called_value_50 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083, mod_consts[15]);

            if (tmp_called_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_50 == NULL)) {
                        tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_50 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1087;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_value_50);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_100d8f0ee06f3a7f631cd1726f063c8b_14->m_frame.f_lineno = 1087;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_50, mod_consts[295]);

            Py_DECREF(tmp_called_value_50);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1087;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083, mod_consts[288], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1087;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_called_value_51;
            tmp_called_value_51 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083, mod_consts[15]);

            if (tmp_called_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_51 == NULL)) {
                        tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_51 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1089;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_value_51);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_100d8f0ee06f3a7f631cd1726f063c8b_14->m_frame.f_lineno = 1089;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_51, mod_consts[296]);

            Py_DECREF(tmp_called_value_51);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1089;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083, mod_consts[297], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1089;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }
        {
            PyObject *tmp_called_value_52;
            tmp_called_value_52 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083, mod_consts[15]);

            if (tmp_called_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_52 == NULL)) {
                        tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_52 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1096;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_value_52);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            frame_100d8f0ee06f3a7f631cd1726f063c8b_14->m_frame.f_lineno = 1096;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_52, mod_consts[298]);

            Py_DECREF(tmp_called_value_52);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1096;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083, mod_consts[292], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1096;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_13;
        frame_exception_exit_14:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_100d8f0ee06f3a7f631cd1726f063c8b_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_100d8f0ee06f3a7f631cd1726f063c8b_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_100d8f0ee06f3a7f631cd1726f063c8b_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_100d8f0ee06f3a7f631cd1726f063c8b_14,
            type_description_2,
            outline_15_var___class__
        );



        assertFrameObject(frame_100d8f0ee06f3a7f631cd1726f063c8b_14);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_13;
        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_48;
        skip_nested_handling_13:;
        {
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_cmp_expr_left_15;
            PyObject *tmp_cmp_expr_right_15;
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_cmp_expr_left_15 = tmp_class_creation_16__bases;
            CHECK_OBJECT(tmp_class_creation_16__bases_orig);
            tmp_cmp_expr_right_15 = tmp_class_creation_16__bases_orig;
            tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
            if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1083;

                goto try_except_handler_48;
            }
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto branch_yes_45;
            } else {
                goto branch_no_45;
            }
        }
        branch_yes_45:;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dictset_value = tmp_class_creation_16__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto try_except_handler_48;
        }
        branch_no_45:;
        {
            PyObject *tmp_assign_source_130;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_31;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_kwargs_value_31;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_value_53 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_59 = mod_consts[293];
            tmp_args_value_31 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_tuple_element_59 = tmp_class_creation_16__bases;
            PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_59);
            tmp_tuple_element_59 = locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083;
            PyTuple_SET_ITEM0(tmp_args_value_31, 2, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_31 = tmp_class_creation_16__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1083;
            tmp_assign_source_130 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_31, tmp_kwargs_value_31);
            Py_DECREF(tmp_args_value_31);
            if (tmp_assign_source_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1083;

                goto try_except_handler_48;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_130;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_assign_source_129 = outline_15_var___class__;
        Py_INCREF(tmp_assign_source_129);
        goto try_return_handler_48;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083);
        locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083 = NULL;
        goto try_return_handler_47;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083);
        locals_zope$interface$interfaces$$$class__16__IBaseAdapterRegistration_1083 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto try_except_handler_47;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_47:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 1083;
        goto try_except_handler_46;
        outline_result_16:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_129);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_16__bases_orig);
    Py_DECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_16__bases);
    Py_DECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_tuple_element_60;
        tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[293]);

        if (unlikely(tmp_tuple_element_60 == NULL)) {
            tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[293]);
        }

        if (tmp_tuple_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        tmp_assign_source_131 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_131, 0, tmp_tuple_element_60);
        assert(tmp_class_creation_17__bases_orig == NULL);
        tmp_class_creation_17__bases_orig = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_dircall_arg1_16;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dircall_arg1_16 = tmp_class_creation_17__bases_orig;
        Py_INCREF(tmp_dircall_arg1_16);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
            tmp_assign_source_132 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_17__bases == NULL);
        tmp_class_creation_17__bases = tmp_assign_source_132;
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__class_decl_dict == NULL);
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_133;
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_metaclass_value_16;
        nuitka_bool tmp_condition_result_61;
        int tmp_truth_name_16;
        PyObject *tmp_type_arg_31;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_16;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_creation_17__bases);
        if (tmp_truth_name_16 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        tmp_condition_result_61 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_expression_value_91 = tmp_class_creation_17__bases;
        tmp_subscript_value_16 = mod_consts[14];
        tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_91, tmp_subscript_value_16, 0);
        if (tmp_type_arg_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
        Py_DECREF(tmp_type_arg_31);
        if (tmp_metaclass_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_16);
        condexpr_end_16:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_bases_value_16 = tmp_class_creation_17__bases;
        tmp_assign_source_134 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
        Py_DECREF(tmp_metaclass_value_16);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_134;
    }
    {
        bool tmp_condition_result_62;
        PyObject *tmp_expression_value_92;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_92 = tmp_class_creation_17__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_92, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        tmp_condition_result_62 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_62 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_value_32;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_kwargs_value_32;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_93 = tmp_class_creation_17__metaclass;
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[23]);
        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        tmp_tuple_element_61 = mod_consts[299];
        tmp_args_value_32 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_61);
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_tuple_element_61 = tmp_class_creation_17__bases;
        PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_61);
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_kwargs_value_32 = tmp_class_creation_17__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1101;
        tmp_assign_source_135 = CALL_FUNCTION(tstate, tmp_called_value_54, tmp_args_value_32, tmp_kwargs_value_32);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_value_32);
        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_135;
    }
    {
        bool tmp_condition_result_63;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_class_creation_17__prepared);
        tmp_expression_value_94 = tmp_class_creation_17__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_63 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_raise_value_16;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        PyObject *tmp_tuple_element_62;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_name_value_19;
        PyObject *tmp_default_value_16;
        tmp_raise_type_16 = PyExc_TypeError;
        tmp_mod_expr_left_16 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_95 = tmp_class_creation_17__metaclass;
        tmp_name_value_19 = mod_consts[2];
        tmp_default_value_16 = mod_consts[27];
        tmp_tuple_element_62 = BUILTIN_GETATTR(tstate, tmp_expression_value_95, tmp_name_value_19, tmp_default_value_16);
        if (tmp_tuple_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_96;
            PyObject *tmp_type_arg_32;
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_type_arg_32 = tmp_class_creation_17__prepared;
            tmp_expression_value_96 = BUILTIN_TYPE1(tmp_type_arg_32);
            assert(!(tmp_expression_value_96 == NULL));
            tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[2]);
            Py_DECREF(tmp_expression_value_96);
            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1101;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_62);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_16);
        goto try_except_handler_49;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        Py_DECREF(tmp_mod_expr_right_16);
        if (tmp_raise_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_49;
        }
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_value = tmp_raise_value_16;
        exception_lineno = 1101;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_49;
    }
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_136;
    }
    branch_end_46:;
    {
        PyObject *tmp_assign_source_137;
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_zope$interface$interfaces$$$class__17_IAdapterRegistration_1101 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__17_IAdapterRegistration_1101, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_51;
        }
        tmp_dictset_value = mod_consts[294];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__17_IAdapterRegistration_1101, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_51;
        }
        tmp_dictset_value = mod_consts[299];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__17_IAdapterRegistration_1101, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_51;
        }
        {
            nuitka_bool tmp_condition_result_64;
            PyObject *tmp_cmp_expr_left_16;
            PyObject *tmp_cmp_expr_right_16;
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_cmp_expr_left_16 = tmp_class_creation_17__bases;
            CHECK_OBJECT(tmp_class_creation_17__bases_orig);
            tmp_cmp_expr_right_16 = tmp_class_creation_17__bases_orig;
            tmp_condition_result_64 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
            if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1101;

                goto try_except_handler_51;
            }
            if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
                goto branch_yes_48;
            } else {
                goto branch_no_48;
            }
        }
        branch_yes_48:;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dictset_value = tmp_class_creation_17__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__17_IAdapterRegistration_1101, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto try_except_handler_51;
        }
        branch_no_48:;
        {
            PyObject *tmp_assign_source_138;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_value_33;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_kwargs_value_33;
            CHECK_OBJECT(tmp_class_creation_17__metaclass);
            tmp_called_value_55 = tmp_class_creation_17__metaclass;
            tmp_tuple_element_63 = mod_consts[299];
            tmp_args_value_33 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_tuple_element_63 = tmp_class_creation_17__bases;
            PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_63);
            tmp_tuple_element_63 = locals_zope$interface$interfaces$$$class__17_IAdapterRegistration_1101;
            PyTuple_SET_ITEM0(tmp_args_value_33, 2, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
            tmp_kwargs_value_33 = tmp_class_creation_17__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1101;
            tmp_assign_source_138 = CALL_FUNCTION(tstate, tmp_called_value_55, tmp_args_value_33, tmp_kwargs_value_33);
            Py_DECREF(tmp_args_value_33);
            if (tmp_assign_source_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1101;

                goto try_except_handler_51;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_138;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_assign_source_137 = outline_16_var___class__;
        Py_INCREF(tmp_assign_source_137);
        goto try_return_handler_51;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__17_IAdapterRegistration_1101);
        locals_zope$interface$interfaces$$$class__17_IAdapterRegistration_1101 = NULL;
        goto try_return_handler_50;
        // Exception handler code:
        try_except_handler_51:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__17_IAdapterRegistration_1101);
        locals_zope$interface$interfaces$$$class__17_IAdapterRegistration_1101 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto try_except_handler_50;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_50:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;
        exception_lineno = exception_keeper_lineno_50;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 1101;
        goto try_except_handler_49;
        outline_result_17:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_137);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    Py_XDECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_17__bases_orig);
    Py_DECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_17__bases);
    Py_DECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    Py_DECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__metaclass);
    Py_DECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_tuple_element_64;
        tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[293]);

        if (unlikely(tmp_tuple_element_64 == NULL)) {
            tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[293]);
        }

        if (tmp_tuple_element_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        tmp_assign_source_139 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_139, 0, tmp_tuple_element_64);
        assert(tmp_class_creation_18__bases_orig == NULL);
        tmp_class_creation_18__bases_orig = tmp_assign_source_139;
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_dircall_arg1_17;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dircall_arg1_17 = tmp_class_creation_18__bases_orig;
        Py_INCREF(tmp_dircall_arg1_17);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
            tmp_assign_source_140 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        assert(tmp_class_creation_18__bases == NULL);
        tmp_class_creation_18__bases = tmp_assign_source_140;
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__class_decl_dict == NULL);
        tmp_class_creation_18__class_decl_dict = tmp_assign_source_141;
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_metaclass_value_17;
        nuitka_bool tmp_condition_result_65;
        int tmp_truth_name_17;
        PyObject *tmp_type_arg_33;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_bases_value_17;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_creation_18__bases);
        if (tmp_truth_name_17 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        tmp_condition_result_65 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_expression_value_97 = tmp_class_creation_18__bases;
        tmp_subscript_value_17 = mod_consts[14];
        tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_17, 0);
        if (tmp_type_arg_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
        Py_DECREF(tmp_type_arg_33);
        if (tmp_metaclass_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_17);
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_bases_value_17 = tmp_class_creation_18__bases;
        tmp_assign_source_142 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
        Py_DECREF(tmp_metaclass_value_17);
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        assert(tmp_class_creation_18__metaclass == NULL);
        tmp_class_creation_18__metaclass = tmp_assign_source_142;
    }
    {
        bool tmp_condition_result_66;
        PyObject *tmp_expression_value_98;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_98 = tmp_class_creation_18__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        tmp_condition_result_66 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_66 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_value_34;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_kwargs_value_34;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_99 = tmp_class_creation_18__metaclass;
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[23]);
        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        tmp_tuple_element_65 = mod_consts[300];
        tmp_args_value_34 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_65);
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_tuple_element_65 = tmp_class_creation_18__bases;
        PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_65);
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_kwargs_value_34 = tmp_class_creation_18__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1105;
        tmp_assign_source_143 = CALL_FUNCTION(tstate, tmp_called_value_56, tmp_args_value_34, tmp_kwargs_value_34);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_value_34);
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_143;
    }
    {
        bool tmp_condition_result_67;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_expression_value_100;
        CHECK_OBJECT(tmp_class_creation_18__prepared);
        tmp_expression_value_100 = tmp_class_creation_18__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        assert(!(tmp_res == -1));
        tmp_condition_result_67 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_67 != false) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        PyObject *tmp_raise_type_17;
        PyObject *tmp_raise_value_17;
        PyObject *tmp_mod_expr_left_17;
        PyObject *tmp_mod_expr_right_17;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_name_value_20;
        PyObject *tmp_default_value_17;
        tmp_raise_type_17 = PyExc_TypeError;
        tmp_mod_expr_left_17 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_101 = tmp_class_creation_18__metaclass;
        tmp_name_value_20 = mod_consts[2];
        tmp_default_value_17 = mod_consts[27];
        tmp_tuple_element_66 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_20, tmp_default_value_17);
        if (tmp_tuple_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_102;
            PyObject *tmp_type_arg_34;
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_66);
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_type_arg_34 = tmp_class_creation_18__prepared;
            tmp_expression_value_102 = BUILTIN_TYPE1(tmp_type_arg_34);
            assert(!(tmp_expression_value_102 == NULL));
            tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[2]);
            Py_DECREF(tmp_expression_value_102);
            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1105;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_66);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_17);
        goto try_except_handler_52;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
        Py_DECREF(tmp_mod_expr_right_17);
        if (tmp_raise_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_52;
        }
        exception_type = tmp_raise_type_17;
        Py_INCREF(tmp_raise_type_17);
        exception_value = tmp_raise_value_17;
        exception_lineno = 1105;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_52;
    }
    branch_no_50:;
    goto branch_end_49;
    branch_no_49:;
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_144;
    }
    branch_end_49:;
    {
        PyObject *tmp_assign_source_145;
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_set_locals_18 = tmp_class_creation_18__prepared;
            locals_zope$interface$interfaces$$$class__18_ISubscriptionAdapterRegistration_1105 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__18_ISubscriptionAdapterRegistration_1105, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_54;
        }
        tmp_dictset_value = mod_consts[301];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__18_ISubscriptionAdapterRegistration_1105, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_54;
        }
        tmp_dictset_value = mod_consts[300];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__18_ISubscriptionAdapterRegistration_1105, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_54;
        }
        {
            nuitka_bool tmp_condition_result_68;
            PyObject *tmp_cmp_expr_left_17;
            PyObject *tmp_cmp_expr_right_17;
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_cmp_expr_left_17 = tmp_class_creation_18__bases;
            CHECK_OBJECT(tmp_class_creation_18__bases_orig);
            tmp_cmp_expr_right_17 = tmp_class_creation_18__bases_orig;
            tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
            if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1105;

                goto try_except_handler_54;
            }
            if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
                goto branch_yes_51;
            } else {
                goto branch_no_51;
            }
        }
        branch_yes_51:;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dictset_value = tmp_class_creation_18__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__18_ISubscriptionAdapterRegistration_1105, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1105;

            goto try_except_handler_54;
        }
        branch_no_51:;
        {
            PyObject *tmp_assign_source_146;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_value_35;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_kwargs_value_35;
            CHECK_OBJECT(tmp_class_creation_18__metaclass);
            tmp_called_value_57 = tmp_class_creation_18__metaclass;
            tmp_tuple_element_67 = mod_consts[300];
            tmp_args_value_35 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_tuple_element_67 = tmp_class_creation_18__bases;
            PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_67);
            tmp_tuple_element_67 = locals_zope$interface$interfaces$$$class__18_ISubscriptionAdapterRegistration_1105;
            PyTuple_SET_ITEM0(tmp_args_value_35, 2, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
            tmp_kwargs_value_35 = tmp_class_creation_18__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1105;
            tmp_assign_source_146 = CALL_FUNCTION(tstate, tmp_called_value_57, tmp_args_value_35, tmp_kwargs_value_35);
            Py_DECREF(tmp_args_value_35);
            if (tmp_assign_source_146 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1105;

                goto try_except_handler_54;
            }
            assert(outline_17_var___class__ == NULL);
            outline_17_var___class__ = tmp_assign_source_146;
        }
        CHECK_OBJECT(outline_17_var___class__);
        tmp_assign_source_145 = outline_17_var___class__;
        Py_INCREF(tmp_assign_source_145);
        goto try_return_handler_54;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_54:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__18_ISubscriptionAdapterRegistration_1105);
        locals_zope$interface$interfaces$$$class__18_ISubscriptionAdapterRegistration_1105 = NULL;
        goto try_return_handler_53;
        // Exception handler code:
        try_except_handler_54:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__18_ISubscriptionAdapterRegistration_1105);
        locals_zope$interface$interfaces$$$class__18_ISubscriptionAdapterRegistration_1105 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_52;
        exception_value = exception_keeper_value_52;
        exception_tb = exception_keeper_tb_52;
        exception_lineno = exception_keeper_lineno_52;

        goto try_except_handler_53;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_53:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_53:;
        exception_keeper_type_53 = exception_type;
        exception_keeper_value_53 = exception_value;
        exception_keeper_tb_53 = exception_tb;
        exception_keeper_lineno_53 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_53;
        exception_value = exception_keeper_value_53;
        exception_tb = exception_keeper_tb_53;
        exception_lineno = exception_keeper_lineno_53;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 1105;
        goto try_except_handler_52;
        outline_result_18:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_145);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    Py_XDECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_54;
    exception_value = exception_keeper_value_54;
    exception_tb = exception_keeper_tb_54;
    exception_lineno = exception_keeper_lineno_54;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_class_creation_18__bases_orig);
    Py_DECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_18__bases);
    Py_DECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    Py_DECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_18__metaclass);
    Py_DECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_18__prepared);
    Py_DECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_tuple_element_68;
        tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[277]);

        if (unlikely(tmp_tuple_element_68 == NULL)) {
            tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[277]);
        }

        if (tmp_tuple_element_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        tmp_assign_source_147 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_147, 0, tmp_tuple_element_68);
        assert(tmp_class_creation_19__bases_orig == NULL);
        tmp_class_creation_19__bases_orig = tmp_assign_source_147;
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_dircall_arg1_18;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dircall_arg1_18 = tmp_class_creation_19__bases_orig;
        Py_INCREF(tmp_dircall_arg1_18);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
            tmp_assign_source_148 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        assert(tmp_class_creation_19__bases == NULL);
        tmp_class_creation_19__bases = tmp_assign_source_148;
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__class_decl_dict == NULL);
        tmp_class_creation_19__class_decl_dict = tmp_assign_source_149;
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_metaclass_value_18;
        nuitka_bool tmp_condition_result_69;
        int tmp_truth_name_18;
        PyObject *tmp_type_arg_35;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_bases_value_18;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_creation_19__bases);
        if (tmp_truth_name_18 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        tmp_condition_result_69 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_expression_value_103 = tmp_class_creation_19__bases;
        tmp_subscript_value_18 = mod_consts[14];
        tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_103, tmp_subscript_value_18, 0);
        if (tmp_type_arg_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
        Py_DECREF(tmp_type_arg_35);
        if (tmp_metaclass_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_18);
        condexpr_end_18:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_bases_value_18 = tmp_class_creation_19__bases;
        tmp_assign_source_150 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
        Py_DECREF(tmp_metaclass_value_18);
        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        assert(tmp_class_creation_19__metaclass == NULL);
        tmp_class_creation_19__metaclass = tmp_assign_source_150;
    }
    {
        bool tmp_condition_result_70;
        PyObject *tmp_expression_value_104;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_104 = tmp_class_creation_19__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        tmp_condition_result_70 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_70 != false) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_args_value_36;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_kwargs_value_36;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_105 = tmp_class_creation_19__metaclass;
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[23]);
        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        tmp_tuple_element_69 = mod_consts[302];
        tmp_args_value_36 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_69);
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_tuple_element_69 = tmp_class_creation_19__bases;
        PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_69);
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_kwargs_value_36 = tmp_class_creation_19__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1109;
        tmp_assign_source_151 = CALL_FUNCTION(tstate, tmp_called_value_58, tmp_args_value_36, tmp_kwargs_value_36);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_value_36);
        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_151;
    }
    {
        bool tmp_condition_result_71;
        PyObject *tmp_operand_value_18;
        PyObject *tmp_expression_value_106;
        CHECK_OBJECT(tmp_class_creation_19__prepared);
        tmp_expression_value_106 = tmp_class_creation_19__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_71 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_71 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_raise_type_18;
        PyObject *tmp_raise_value_18;
        PyObject *tmp_mod_expr_left_18;
        PyObject *tmp_mod_expr_right_18;
        PyObject *tmp_tuple_element_70;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_name_value_21;
        PyObject *tmp_default_value_18;
        tmp_raise_type_18 = PyExc_TypeError;
        tmp_mod_expr_left_18 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_107 = tmp_class_creation_19__metaclass;
        tmp_name_value_21 = mod_consts[2];
        tmp_default_value_18 = mod_consts[27];
        tmp_tuple_element_70 = BUILTIN_GETATTR(tstate, tmp_expression_value_107, tmp_name_value_21, tmp_default_value_18);
        if (tmp_tuple_element_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_108;
            PyObject *tmp_type_arg_36;
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_70);
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_type_arg_36 = tmp_class_creation_19__prepared;
            tmp_expression_value_108 = BUILTIN_TYPE1(tmp_type_arg_36);
            assert(!(tmp_expression_value_108 == NULL));
            tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[2]);
            Py_DECREF(tmp_expression_value_108);
            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1109;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_70);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_18);
        goto try_except_handler_55;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
        Py_DECREF(tmp_mod_expr_right_18);
        if (tmp_raise_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_55;
        }
        exception_type = tmp_raise_type_18;
        Py_INCREF(tmp_raise_type_18);
        exception_value = tmp_raise_value_18;
        exception_lineno = 1109;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_55;
    }
    branch_no_53:;
    goto branch_end_52;
    branch_no_52:;
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_152;
    }
    branch_end_52:;
    {
        PyObject *tmp_assign_source_153;
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_set_locals_19 = tmp_class_creation_19__prepared;
            locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_57;
        }
        tmp_dictset_value = mod_consts[302];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_57;
        }
        frame_627758dd1158aacbad0b7a1fde720511_15 = MAKE_CLASS_FRAME(tstate, codeobj_627758dd1158aacbad0b7a1fde720511, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_627758dd1158aacbad0b7a1fde720511_15);
        assert(Py_REFCNT(frame_627758dd1158aacbad0b7a1fde720511_15) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_59;
            tmp_called_value_59 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109, mod_consts[15]);

            if (tmp_called_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_59 == NULL)) {
                        tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_59 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1111;
                        type_description_2 = "o";
                        goto frame_exception_exit_15;
                    }
                    Py_INCREF(tmp_called_value_59);
                } else {
                    goto frame_exception_exit_15;
                }
            }

            frame_627758dd1158aacbad0b7a1fde720511_15->m_frame.f_lineno = 1111;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_59, mod_consts[303]);

            Py_DECREF(tmp_called_value_59);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1111;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109, mod_consts[304], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1111;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
        }
        {
            PyObject *tmp_called_value_60;
            tmp_called_value_60 = PyObject_GetItem(locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109, mod_consts[15]);

            if (tmp_called_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_value_60 == NULL)) {
                        tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_called_value_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1113;
                        type_description_2 = "o";
                        goto frame_exception_exit_15;
                    }
                    Py_INCREF(tmp_called_value_60);
                } else {
                    goto frame_exception_exit_15;
                }
            }

            frame_627758dd1158aacbad0b7a1fde720511_15->m_frame.f_lineno = 1113;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_60, mod_consts[305]);

            Py_DECREF(tmp_called_value_60);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1113;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109, mod_consts[297], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1113;
                type_description_2 = "o";
                goto frame_exception_exit_15;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_14;
        frame_exception_exit_15:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_627758dd1158aacbad0b7a1fde720511_15, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_627758dd1158aacbad0b7a1fde720511_15->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_627758dd1158aacbad0b7a1fde720511_15, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_627758dd1158aacbad0b7a1fde720511_15,
            type_description_2,
            outline_18_var___class__
        );



        assertFrameObject(frame_627758dd1158aacbad0b7a1fde720511_15);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_14;
        frame_no_exception_14:;
        goto skip_nested_handling_14;
        nested_frame_exit_14:;

        goto try_except_handler_57;
        skip_nested_handling_14:;
        {
            nuitka_bool tmp_condition_result_72;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_cmp_expr_left_18 = tmp_class_creation_19__bases;
            CHECK_OBJECT(tmp_class_creation_19__bases_orig);
            tmp_cmp_expr_right_18 = tmp_class_creation_19__bases_orig;
            tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
            if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1109;

                goto try_except_handler_57;
            }
            if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
                goto branch_yes_54;
            } else {
                goto branch_no_54;
            }
        }
        branch_yes_54:;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dictset_value = tmp_class_creation_19__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1109;

            goto try_except_handler_57;
        }
        branch_no_54:;
        {
            PyObject *tmp_assign_source_154;
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_value_37;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_kwargs_value_37;
            CHECK_OBJECT(tmp_class_creation_19__metaclass);
            tmp_called_value_61 = tmp_class_creation_19__metaclass;
            tmp_tuple_element_71 = mod_consts[302];
            tmp_args_value_37 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_tuple_element_71 = tmp_class_creation_19__bases;
            PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109;
            PyTuple_SET_ITEM0(tmp_args_value_37, 2, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
            tmp_kwargs_value_37 = tmp_class_creation_19__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1109;
            tmp_assign_source_154 = CALL_FUNCTION(tstate, tmp_called_value_61, tmp_args_value_37, tmp_kwargs_value_37);
            Py_DECREF(tmp_args_value_37);
            if (tmp_assign_source_154 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1109;

                goto try_except_handler_57;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_154;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_assign_source_153 = outline_18_var___class__;
        Py_INCREF(tmp_assign_source_153);
        goto try_return_handler_57;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_57:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109);
        locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109 = NULL;
        goto try_return_handler_56;
        // Exception handler code:
        try_except_handler_57:;
        exception_keeper_type_55 = exception_type;
        exception_keeper_value_55 = exception_value;
        exception_keeper_tb_55 = exception_tb;
        exception_keeper_lineno_55 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109);
        locals_zope$interface$interfaces$$$class__19_IHandlerRegistration_1109 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_55;
        exception_value = exception_keeper_value_55;
        exception_tb = exception_keeper_tb_55;
        exception_lineno = exception_keeper_lineno_55;

        goto try_except_handler_56;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_56:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_56:;
        exception_keeper_type_56 = exception_type;
        exception_keeper_value_56 = exception_value;
        exception_keeper_tb_56 = exception_tb;
        exception_keeper_lineno_56 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_56;
        exception_value = exception_keeper_value_56;
        exception_tb = exception_keeper_tb_56;
        exception_lineno = exception_keeper_lineno_56;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 1109;
        goto try_except_handler_55;
        outline_result_19:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_153);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    Py_XDECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_class_creation_19__bases_orig);
    Py_DECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_19__bases);
    Py_DECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    Py_DECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_19__metaclass);
    Py_DECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_19__prepared);
    Py_DECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_tuple_element_72;
        tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[237]);

        if (unlikely(tmp_tuple_element_72 == NULL)) {
            tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[237]);
        }

        if (tmp_tuple_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        tmp_assign_source_155 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_155, 0, tmp_tuple_element_72);
        assert(tmp_class_creation_20__bases_orig == NULL);
        tmp_class_creation_20__bases_orig = tmp_assign_source_155;
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_dircall_arg1_19;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dircall_arg1_19 = tmp_class_creation_20__bases_orig;
        Py_INCREF(tmp_dircall_arg1_19);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_19};
            tmp_assign_source_156 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        assert(tmp_class_creation_20__bases == NULL);
        tmp_class_creation_20__bases = tmp_assign_source_156;
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__class_decl_dict == NULL);
        tmp_class_creation_20__class_decl_dict = tmp_assign_source_157;
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_metaclass_value_19;
        nuitka_bool tmp_condition_result_73;
        int tmp_truth_name_19;
        PyObject *tmp_type_arg_37;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_bases_value_19;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_creation_20__bases);
        if (tmp_truth_name_19 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        tmp_condition_result_73 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_expression_value_109 = tmp_class_creation_20__bases;
        tmp_subscript_value_19 = mod_consts[14];
        tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_109, tmp_subscript_value_19, 0);
        if (tmp_type_arg_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
        Py_DECREF(tmp_type_arg_37);
        if (tmp_metaclass_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_19);
        condexpr_end_19:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_bases_value_19 = tmp_class_creation_20__bases;
        tmp_assign_source_158 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
        Py_DECREF(tmp_metaclass_value_19);
        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        assert(tmp_class_creation_20__metaclass == NULL);
        tmp_class_creation_20__metaclass = tmp_assign_source_158;
    }
    {
        bool tmp_condition_result_74;
        PyObject *tmp_expression_value_110;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_110 = tmp_class_creation_20__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_110, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        tmp_condition_result_74 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_74 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_args_value_38;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_kwargs_value_38;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_111 = tmp_class_creation_20__metaclass;
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[23]);
        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        tmp_tuple_element_73 = mod_consts[306];
        tmp_args_value_38 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_tuple_element_73 = tmp_class_creation_20__bases;
        PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_kwargs_value_38 = tmp_class_creation_20__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1120;
        tmp_assign_source_159 = CALL_FUNCTION(tstate, tmp_called_value_62, tmp_args_value_38, tmp_kwargs_value_38);
        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_value_38);
        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_159;
    }
    {
        bool tmp_condition_result_75;
        PyObject *tmp_operand_value_19;
        PyObject *tmp_expression_value_112;
        CHECK_OBJECT(tmp_class_creation_20__prepared);
        tmp_expression_value_112 = tmp_class_creation_20__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_112, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_75 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_75 != false) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
    }
    branch_yes_56:;
    {
        PyObject *tmp_raise_type_19;
        PyObject *tmp_raise_value_19;
        PyObject *tmp_mod_expr_left_19;
        PyObject *tmp_mod_expr_right_19;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_name_value_22;
        PyObject *tmp_default_value_19;
        tmp_raise_type_19 = PyExc_TypeError;
        tmp_mod_expr_left_19 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_113 = tmp_class_creation_20__metaclass;
        tmp_name_value_22 = mod_consts[2];
        tmp_default_value_19 = mod_consts[27];
        tmp_tuple_element_74 = BUILTIN_GETATTR(tstate, tmp_expression_value_113, tmp_name_value_22, tmp_default_value_19);
        if (tmp_tuple_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_114;
            PyObject *tmp_type_arg_38;
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_type_arg_38 = tmp_class_creation_20__prepared;
            tmp_expression_value_114 = BUILTIN_TYPE1(tmp_type_arg_38);
            assert(!(tmp_expression_value_114 == NULL));
            tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[2]);
            Py_DECREF(tmp_expression_value_114);
            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1120;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_74);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_mod_expr_right_19);
        goto try_except_handler_58;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_raise_value_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
        Py_DECREF(tmp_mod_expr_right_19);
        if (tmp_raise_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_58;
        }
        exception_type = tmp_raise_type_19;
        Py_INCREF(tmp_raise_type_19);
        exception_value = tmp_raise_value_19;
        exception_lineno = 1120;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_58;
    }
    branch_no_56:;
    goto branch_end_55;
    branch_no_55:;
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_160;
    }
    branch_end_55:;
    {
        PyObject *tmp_assign_source_161;
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_set_locals_20 = tmp_class_creation_20__prepared;
            locals_zope$interface$interfaces$$$class__20_IRegistrationEvent_1120 = tmp_set_locals_20;
            Py_INCREF(tmp_set_locals_20);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__20_IRegistrationEvent_1120, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_60;
        }
        tmp_dictset_value = mod_consts[307];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__20_IRegistrationEvent_1120, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_60;
        }
        tmp_dictset_value = mod_consts[306];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__20_IRegistrationEvent_1120, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_60;
        }
        {
            nuitka_bool tmp_condition_result_76;
            PyObject *tmp_cmp_expr_left_19;
            PyObject *tmp_cmp_expr_right_19;
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_cmp_expr_left_19 = tmp_class_creation_20__bases;
            CHECK_OBJECT(tmp_class_creation_20__bases_orig);
            tmp_cmp_expr_right_19 = tmp_class_creation_20__bases_orig;
            tmp_condition_result_76 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
            if (tmp_condition_result_76 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1120;

                goto try_except_handler_60;
            }
            if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
                goto branch_yes_57;
            } else {
                goto branch_no_57;
            }
        }
        branch_yes_57:;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dictset_value = tmp_class_creation_20__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__20_IRegistrationEvent_1120, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto try_except_handler_60;
        }
        branch_no_57:;
        {
            PyObject *tmp_assign_source_162;
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_value_39;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_kwargs_value_39;
            CHECK_OBJECT(tmp_class_creation_20__metaclass);
            tmp_called_value_63 = tmp_class_creation_20__metaclass;
            tmp_tuple_element_75 = mod_consts[306];
            tmp_args_value_39 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_tuple_element_75 = tmp_class_creation_20__bases;
            PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_75);
            tmp_tuple_element_75 = locals_zope$interface$interfaces$$$class__20_IRegistrationEvent_1120;
            PyTuple_SET_ITEM0(tmp_args_value_39, 2, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
            tmp_kwargs_value_39 = tmp_class_creation_20__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1120;
            tmp_assign_source_162 = CALL_FUNCTION(tstate, tmp_called_value_63, tmp_args_value_39, tmp_kwargs_value_39);
            Py_DECREF(tmp_args_value_39);
            if (tmp_assign_source_162 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1120;

                goto try_except_handler_60;
            }
            assert(outline_19_var___class__ == NULL);
            outline_19_var___class__ = tmp_assign_source_162;
        }
        CHECK_OBJECT(outline_19_var___class__);
        tmp_assign_source_161 = outline_19_var___class__;
        Py_INCREF(tmp_assign_source_161);
        goto try_return_handler_60;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_60:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__20_IRegistrationEvent_1120);
        locals_zope$interface$interfaces$$$class__20_IRegistrationEvent_1120 = NULL;
        goto try_return_handler_59;
        // Exception handler code:
        try_except_handler_60:;
        exception_keeper_type_58 = exception_type;
        exception_keeper_value_58 = exception_value;
        exception_keeper_tb_58 = exception_tb;
        exception_keeper_lineno_58 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__20_IRegistrationEvent_1120);
        locals_zope$interface$interfaces$$$class__20_IRegistrationEvent_1120 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_58;
        exception_value = exception_keeper_value_58;
        exception_tb = exception_keeper_tb_58;
        exception_lineno = exception_keeper_lineno_58;

        goto try_except_handler_59;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_59:;
        CHECK_OBJECT(outline_19_var___class__);
        Py_DECREF(outline_19_var___class__);
        outline_19_var___class__ = NULL;
        goto outline_result_20;
        // Exception handler code:
        try_except_handler_59:;
        exception_keeper_type_59 = exception_type;
        exception_keeper_value_59 = exception_value;
        exception_keeper_tb_59 = exception_tb;
        exception_keeper_lineno_59 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_59;
        exception_value = exception_keeper_value_59;
        exception_tb = exception_keeper_tb_59;
        exception_lineno = exception_keeper_lineno_59;

        goto outline_exception_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_20:;
        exception_lineno = 1120;
        goto try_except_handler_58;
        outline_result_20:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_161);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    Py_XDECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_60;
    exception_value = exception_keeper_value_60;
    exception_tb = exception_keeper_tb_60;
    exception_lineno = exception_keeper_lineno_60;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_class_creation_20__bases_orig);
    Py_DECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_20__bases);
    Py_DECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    Py_DECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_20__metaclass);
    Py_DECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_20__prepared);
    Py_DECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_tuple_element_76;
        tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_tuple_element_76 == NULL)) {
            tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[240]);
        }

        if (tmp_tuple_element_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        tmp_assign_source_163 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_163, 0, tmp_tuple_element_76);
        assert(tmp_class_creation_21__bases_orig == NULL);
        tmp_class_creation_21__bases_orig = tmp_assign_source_163;
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_dircall_arg1_20;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dircall_arg1_20 = tmp_class_creation_21__bases_orig;
        Py_INCREF(tmp_dircall_arg1_20);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_20};
            tmp_assign_source_164 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        assert(tmp_class_creation_21__bases == NULL);
        tmp_class_creation_21__bases = tmp_assign_source_164;
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__class_decl_dict == NULL);
        tmp_class_creation_21__class_decl_dict = tmp_assign_source_165;
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_metaclass_value_20;
        nuitka_bool tmp_condition_result_77;
        int tmp_truth_name_20;
        PyObject *tmp_type_arg_39;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_bases_value_20;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_creation_21__bases);
        if (tmp_truth_name_20 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        tmp_condition_result_77 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_expression_value_115 = tmp_class_creation_21__bases;
        tmp_subscript_value_20 = mod_consts[14];
        tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_115, tmp_subscript_value_20, 0);
        if (tmp_type_arg_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
        Py_DECREF(tmp_type_arg_39);
        if (tmp_metaclass_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_20);
        condexpr_end_20:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_bases_value_20 = tmp_class_creation_21__bases;
        tmp_assign_source_166 = SELECT_METACLASS(tstate, tmp_metaclass_value_20, tmp_bases_value_20);
        Py_DECREF(tmp_metaclass_value_20);
        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        assert(tmp_class_creation_21__metaclass == NULL);
        tmp_class_creation_21__metaclass = tmp_assign_source_166;
    }
    {
        bool tmp_condition_result_78;
        PyObject *tmp_expression_value_116;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_116 = tmp_class_creation_21__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_116, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        tmp_condition_result_78 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_78 != false) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_value_40;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_kwargs_value_40;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_117 = tmp_class_creation_21__metaclass;
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[23]);
        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        tmp_tuple_element_77 = mod_consts[308];
        tmp_args_value_40 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_77);
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_tuple_element_77 = tmp_class_creation_21__bases;
        PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_77);
        CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
        tmp_kwargs_value_40 = tmp_class_creation_21__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1125;
        tmp_assign_source_167 = CALL_FUNCTION(tstate, tmp_called_value_64, tmp_args_value_40, tmp_kwargs_value_40);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_value_40);
        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_167;
    }
    {
        bool tmp_condition_result_79;
        PyObject *tmp_operand_value_20;
        PyObject *tmp_expression_value_118;
        CHECK_OBJECT(tmp_class_creation_21__prepared);
        tmp_expression_value_118 = tmp_class_creation_21__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_118, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
        assert(!(tmp_res == -1));
        tmp_condition_result_79 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_79 != false) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    {
        PyObject *tmp_raise_type_20;
        PyObject *tmp_raise_value_20;
        PyObject *tmp_mod_expr_left_20;
        PyObject *tmp_mod_expr_right_20;
        PyObject *tmp_tuple_element_78;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_name_value_23;
        PyObject *tmp_default_value_20;
        tmp_raise_type_20 = PyExc_TypeError;
        tmp_mod_expr_left_20 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_119 = tmp_class_creation_21__metaclass;
        tmp_name_value_23 = mod_consts[2];
        tmp_default_value_20 = mod_consts[27];
        tmp_tuple_element_78 = BUILTIN_GETATTR(tstate, tmp_expression_value_119, tmp_name_value_23, tmp_default_value_20);
        if (tmp_tuple_element_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_120;
            PyObject *tmp_type_arg_40;
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_type_arg_40 = tmp_class_creation_21__prepared;
            tmp_expression_value_120 = BUILTIN_TYPE1(tmp_type_arg_40);
            assert(!(tmp_expression_value_120 == NULL));
            tmp_tuple_element_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[2]);
            Py_DECREF(tmp_expression_value_120);
            if (tmp_tuple_element_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1125;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_78);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_mod_expr_right_20);
        goto try_except_handler_61;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_raise_value_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
        Py_DECREF(tmp_mod_expr_right_20);
        if (tmp_raise_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_61;
        }
        exception_type = tmp_raise_type_20;
        Py_INCREF(tmp_raise_type_20);
        exception_value = tmp_raise_value_20;
        exception_lineno = 1125;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_61;
    }
    branch_no_59:;
    goto branch_end_58;
    branch_no_58:;
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_168;
    }
    branch_end_58:;
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_called_value_65;
        PyObject *tmp_called_value_66;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto try_except_handler_61;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[306]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[306]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto try_except_handler_61;
        }
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1124;
        tmp_called_value_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_3);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto try_except_handler_61;
        }
        {
            PyObject *tmp_set_locals_21;
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_set_locals_21 = tmp_class_creation_21__prepared;
            locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125 = tmp_set_locals_21;
            Py_INCREF(tmp_set_locals_21);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_63;
        }
        tmp_dictset_value = mod_consts[309];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_63;
        }
        tmp_dictset_value = mod_consts[308];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_63;
        }
        frame_cec6a93b7e20f68378b4741bc6e64ec3_16 = MAKE_CLASS_FRAME(tstate, codeobj_cec6a93b7e20f68378b4741bc6e64ec3, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_cec6a93b7e20f68378b4741bc6e64ec3_16);
        assert(Py_REFCNT(frame_cec6a93b7e20f68378b4741bc6e64ec3_16) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__70___repr__();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125, mod_consts[310], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1128;
            type_description_2 = "o";
            goto frame_exception_exit_16;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_15;
        frame_exception_exit_16:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cec6a93b7e20f68378b4741bc6e64ec3_16, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cec6a93b7e20f68378b4741bc6e64ec3_16->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cec6a93b7e20f68378b4741bc6e64ec3_16, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cec6a93b7e20f68378b4741bc6e64ec3_16,
            type_description_2,
            outline_20_var___class__
        );



        assertFrameObject(frame_cec6a93b7e20f68378b4741bc6e64ec3_16);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_15;
        frame_no_exception_15:;
        goto skip_nested_handling_15;
        nested_frame_exit_15:;

        goto try_except_handler_63;
        skip_nested_handling_15:;
        {
            nuitka_bool tmp_condition_result_80;
            PyObject *tmp_cmp_expr_left_20;
            PyObject *tmp_cmp_expr_right_20;
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_cmp_expr_left_20 = tmp_class_creation_21__bases;
            CHECK_OBJECT(tmp_class_creation_21__bases_orig);
            tmp_cmp_expr_right_20 = tmp_class_creation_21__bases_orig;
            tmp_condition_result_80 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
            if (tmp_condition_result_80 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1125;

                goto try_except_handler_63;
            }
            if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
                goto branch_yes_60;
            } else {
                goto branch_no_60;
            }
        }
        branch_yes_60:;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dictset_value = tmp_class_creation_21__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto try_except_handler_63;
        }
        branch_no_60:;
        {
            PyObject *tmp_assign_source_170;
            PyObject *tmp_called_value_67;
            PyObject *tmp_args_value_41;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_kwargs_value_41;
            CHECK_OBJECT(tmp_class_creation_21__metaclass);
            tmp_called_value_67 = tmp_class_creation_21__metaclass;
            tmp_tuple_element_79 = mod_consts[308];
            tmp_args_value_41 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_79);
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_tuple_element_79 = tmp_class_creation_21__bases;
            PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_79);
            tmp_tuple_element_79 = locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125;
            PyTuple_SET_ITEM0(tmp_args_value_41, 2, tmp_tuple_element_79);
            CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
            tmp_kwargs_value_41 = tmp_class_creation_21__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1125;
            tmp_assign_source_170 = CALL_FUNCTION(tstate, tmp_called_value_67, tmp_args_value_41, tmp_kwargs_value_41);
            Py_DECREF(tmp_args_value_41);
            if (tmp_assign_source_170 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1125;

                goto try_except_handler_63;
            }
            assert(outline_20_var___class__ == NULL);
            outline_20_var___class__ = tmp_assign_source_170;
        }
        CHECK_OBJECT(outline_20_var___class__);
        tmp_args_element_value_4 = outline_20_var___class__;
        Py_INCREF(tmp_args_element_value_4);
        goto try_return_handler_63;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_63:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125);
        locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125 = NULL;
        goto try_return_handler_62;
        // Exception handler code:
        try_except_handler_63:;
        exception_keeper_type_61 = exception_type;
        exception_keeper_value_61 = exception_value;
        exception_keeper_tb_61 = exception_tb;
        exception_keeper_lineno_61 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125);
        locals_zope$interface$interfaces$$$class__21_RegistrationEvent_1125 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_61;
        exception_value = exception_keeper_value_61;
        exception_tb = exception_keeper_tb_61;
        exception_lineno = exception_keeper_lineno_61;

        goto try_except_handler_62;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_62:;
        CHECK_OBJECT(outline_20_var___class__);
        Py_DECREF(outline_20_var___class__);
        outline_20_var___class__ = NULL;
        goto outline_result_21;
        // Exception handler code:
        try_except_handler_62:;
        exception_keeper_type_62 = exception_type;
        exception_keeper_value_62 = exception_value;
        exception_keeper_tb_62 = exception_tb;
        exception_keeper_lineno_62 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_62;
        exception_value = exception_keeper_value_62;
        exception_tb = exception_keeper_tb_62;
        exception_lineno = exception_keeper_lineno_62;

        goto outline_exception_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_21:;
        exception_lineno = 1125;
        goto try_except_handler_61;
        outline_result_21:;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1124;
        tmp_assign_source_169 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_65);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto try_except_handler_61;
        }
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_169);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    Py_XDECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_class_creation_21__bases_orig);
    Py_DECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_21__bases);
    Py_DECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
    Py_DECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_21__metaclass);
    Py_DECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_21__prepared);
    Py_DECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_tuple_element_80;
        tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[306]);

        if (unlikely(tmp_tuple_element_80 == NULL)) {
            tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[306]);
        }

        if (tmp_tuple_element_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        tmp_assign_source_171 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_171, 0, tmp_tuple_element_80);
        assert(tmp_class_creation_22__bases_orig == NULL);
        tmp_class_creation_22__bases_orig = tmp_assign_source_171;
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_dircall_arg1_21;
        CHECK_OBJECT(tmp_class_creation_22__bases_orig);
        tmp_dircall_arg1_21 = tmp_class_creation_22__bases_orig;
        Py_INCREF(tmp_dircall_arg1_21);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_21};
            tmp_assign_source_172 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        assert(tmp_class_creation_22__bases == NULL);
        tmp_class_creation_22__bases = tmp_assign_source_172;
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__class_decl_dict == NULL);
        tmp_class_creation_22__class_decl_dict = tmp_assign_source_173;
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_metaclass_value_21;
        nuitka_bool tmp_condition_result_81;
        int tmp_truth_name_21;
        PyObject *tmp_type_arg_41;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_bases_value_21;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_truth_name_21 = CHECK_IF_TRUE(tmp_class_creation_22__bases);
        if (tmp_truth_name_21 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        tmp_condition_result_81 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_expression_value_121 = tmp_class_creation_22__bases;
        tmp_subscript_value_21 = mod_consts[14];
        tmp_type_arg_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_121, tmp_subscript_value_21, 0);
        if (tmp_type_arg_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_41);
        Py_DECREF(tmp_type_arg_41);
        if (tmp_metaclass_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        tmp_metaclass_value_21 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_21);
        condexpr_end_21:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_bases_value_21 = tmp_class_creation_22__bases;
        tmp_assign_source_174 = SELECT_METACLASS(tstate, tmp_metaclass_value_21, tmp_bases_value_21);
        Py_DECREF(tmp_metaclass_value_21);
        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        assert(tmp_class_creation_22__metaclass == NULL);
        tmp_class_creation_22__metaclass = tmp_assign_source_174;
    }
    {
        bool tmp_condition_result_82;
        PyObject *tmp_expression_value_122;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_122 = tmp_class_creation_22__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_122, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        tmp_condition_result_82 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_82 != false) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_args_value_42;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_kwargs_value_42;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_123 = tmp_class_creation_22__metaclass;
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[23]);
        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        tmp_tuple_element_81 = mod_consts[312];
        tmp_args_value_42 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_81);
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_tuple_element_81 = tmp_class_creation_22__bases;
        PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_81);
        CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
        tmp_kwargs_value_42 = tmp_class_creation_22__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1131;
        tmp_assign_source_175 = CALL_FUNCTION(tstate, tmp_called_value_68, tmp_args_value_42, tmp_kwargs_value_42);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_value_42);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_175;
    }
    {
        bool tmp_condition_result_83;
        PyObject *tmp_operand_value_21;
        PyObject *tmp_expression_value_124;
        CHECK_OBJECT(tmp_class_creation_22__prepared);
        tmp_expression_value_124 = tmp_class_creation_22__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_124, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        tmp_operand_value_21 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_83 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_83 != false) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
    }
    branch_yes_62:;
    {
        PyObject *tmp_raise_type_21;
        PyObject *tmp_raise_value_21;
        PyObject *tmp_mod_expr_left_21;
        PyObject *tmp_mod_expr_right_21;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_name_value_24;
        PyObject *tmp_default_value_21;
        tmp_raise_type_21 = PyExc_TypeError;
        tmp_mod_expr_left_21 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_125 = tmp_class_creation_22__metaclass;
        tmp_name_value_24 = mod_consts[2];
        tmp_default_value_21 = mod_consts[27];
        tmp_tuple_element_82 = BUILTIN_GETATTR(tstate, tmp_expression_value_125, tmp_name_value_24, tmp_default_value_21);
        if (tmp_tuple_element_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        tmp_mod_expr_right_21 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_126;
            PyObject *tmp_type_arg_42;
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 0, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_type_arg_42 = tmp_class_creation_22__prepared;
            tmp_expression_value_126 = BUILTIN_TYPE1(tmp_type_arg_42);
            assert(!(tmp_expression_value_126 == NULL));
            tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[2]);
            Py_DECREF(tmp_expression_value_126);
            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1131;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 1, tmp_tuple_element_82);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_mod_expr_right_21);
        goto try_except_handler_64;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_raise_value_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
        Py_DECREF(tmp_mod_expr_right_21);
        if (tmp_raise_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_64;
        }
        exception_type = tmp_raise_type_21;
        Py_INCREF(tmp_raise_type_21);
        exception_value = tmp_raise_value_21;
        exception_lineno = 1131;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_64;
    }
    branch_no_62:;
    goto branch_end_61;
    branch_no_61:;
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_176;
    }
    branch_end_61:;
    {
        PyObject *tmp_assign_source_177;
        {
            PyObject *tmp_set_locals_22;
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_set_locals_22 = tmp_class_creation_22__prepared;
            locals_zope$interface$interfaces$$$class__22_IRegistered_1131 = tmp_set_locals_22;
            Py_INCREF(tmp_set_locals_22);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__22_IRegistered_1131, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_66;
        }
        tmp_dictset_value = mod_consts[313];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__22_IRegistered_1131, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_66;
        }
        tmp_dictset_value = mod_consts[312];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__22_IRegistered_1131, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_66;
        }
        {
            nuitka_bool tmp_condition_result_84;
            PyObject *tmp_cmp_expr_left_21;
            PyObject *tmp_cmp_expr_right_21;
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_cmp_expr_left_21 = tmp_class_creation_22__bases;
            CHECK_OBJECT(tmp_class_creation_22__bases_orig);
            tmp_cmp_expr_right_21 = tmp_class_creation_22__bases_orig;
            tmp_condition_result_84 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
            if (tmp_condition_result_84 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1131;

                goto try_except_handler_66;
            }
            if (tmp_condition_result_84 == NUITKA_BOOL_TRUE) {
                goto branch_yes_63;
            } else {
                goto branch_no_63;
            }
        }
        branch_yes_63:;
        CHECK_OBJECT(tmp_class_creation_22__bases_orig);
        tmp_dictset_value = tmp_class_creation_22__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__22_IRegistered_1131, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto try_except_handler_66;
        }
        branch_no_63:;
        {
            PyObject *tmp_assign_source_178;
            PyObject *tmp_called_value_69;
            PyObject *tmp_args_value_43;
            PyObject *tmp_tuple_element_83;
            PyObject *tmp_kwargs_value_43;
            CHECK_OBJECT(tmp_class_creation_22__metaclass);
            tmp_called_value_69 = tmp_class_creation_22__metaclass;
            tmp_tuple_element_83 = mod_consts[312];
            tmp_args_value_43 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_83);
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_tuple_element_83 = tmp_class_creation_22__bases;
            PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_83);
            tmp_tuple_element_83 = locals_zope$interface$interfaces$$$class__22_IRegistered_1131;
            PyTuple_SET_ITEM0(tmp_args_value_43, 2, tmp_tuple_element_83);
            CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
            tmp_kwargs_value_43 = tmp_class_creation_22__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1131;
            tmp_assign_source_178 = CALL_FUNCTION(tstate, tmp_called_value_69, tmp_args_value_43, tmp_kwargs_value_43);
            Py_DECREF(tmp_args_value_43);
            if (tmp_assign_source_178 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1131;

                goto try_except_handler_66;
            }
            assert(outline_21_var___class__ == NULL);
            outline_21_var___class__ = tmp_assign_source_178;
        }
        CHECK_OBJECT(outline_21_var___class__);
        tmp_assign_source_177 = outline_21_var___class__;
        Py_INCREF(tmp_assign_source_177);
        goto try_return_handler_66;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_66:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__22_IRegistered_1131);
        locals_zope$interface$interfaces$$$class__22_IRegistered_1131 = NULL;
        goto try_return_handler_65;
        // Exception handler code:
        try_except_handler_66:;
        exception_keeper_type_64 = exception_type;
        exception_keeper_value_64 = exception_value;
        exception_keeper_tb_64 = exception_tb;
        exception_keeper_lineno_64 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__22_IRegistered_1131);
        locals_zope$interface$interfaces$$$class__22_IRegistered_1131 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_64;
        exception_value = exception_keeper_value_64;
        exception_tb = exception_keeper_tb_64;
        exception_lineno = exception_keeper_lineno_64;

        goto try_except_handler_65;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_65:;
        CHECK_OBJECT(outline_21_var___class__);
        Py_DECREF(outline_21_var___class__);
        outline_21_var___class__ = NULL;
        goto outline_result_22;
        // Exception handler code:
        try_except_handler_65:;
        exception_keeper_type_65 = exception_type;
        exception_keeper_value_65 = exception_value;
        exception_keeper_tb_65 = exception_tb;
        exception_keeper_lineno_65 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_65;
        exception_value = exception_keeper_value_65;
        exception_tb = exception_keeper_tb_65;
        exception_lineno = exception_keeper_lineno_65;

        goto outline_exception_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_22:;
        exception_lineno = 1131;
        goto try_except_handler_64;
        outline_result_22:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_177);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_22__bases_orig);
    tmp_class_creation_22__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    Py_XDECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_66;
    exception_value = exception_keeper_value_66;
    exception_tb = exception_keeper_tb_66;
    exception_lineno = exception_keeper_lineno_66;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_class_creation_22__bases_orig);
    Py_DECREF(tmp_class_creation_22__bases_orig);
    tmp_class_creation_22__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_22__bases);
    Py_DECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
    Py_DECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_22__metaclass);
    Py_DECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_22__prepared);
    Py_DECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_tuple_element_84;
        tmp_tuple_element_84 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[308]);

        if (unlikely(tmp_tuple_element_84 == NULL)) {
            tmp_tuple_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[308]);
        }

        if (tmp_tuple_element_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        tmp_assign_source_179 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_179, 0, tmp_tuple_element_84);
        assert(tmp_class_creation_23__bases_orig == NULL);
        tmp_class_creation_23__bases_orig = tmp_assign_source_179;
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_dircall_arg1_22;
        CHECK_OBJECT(tmp_class_creation_23__bases_orig);
        tmp_dircall_arg1_22 = tmp_class_creation_23__bases_orig;
        Py_INCREF(tmp_dircall_arg1_22);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_22};
            tmp_assign_source_180 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        assert(tmp_class_creation_23__bases == NULL);
        tmp_class_creation_23__bases = tmp_assign_source_180;
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__class_decl_dict == NULL);
        tmp_class_creation_23__class_decl_dict = tmp_assign_source_181;
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_metaclass_value_22;
        nuitka_bool tmp_condition_result_85;
        int tmp_truth_name_22;
        PyObject *tmp_type_arg_43;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_bases_value_22;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_truth_name_22 = CHECK_IF_TRUE(tmp_class_creation_23__bases);
        if (tmp_truth_name_22 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        tmp_condition_result_85 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_22;
        } else {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_expression_value_127 = tmp_class_creation_23__bases;
        tmp_subscript_value_22 = mod_consts[14];
        tmp_type_arg_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_127, tmp_subscript_value_22, 0);
        if (tmp_type_arg_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_43);
        Py_DECREF(tmp_type_arg_43);
        if (tmp_metaclass_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_22);
        condexpr_end_22:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_bases_value_22 = tmp_class_creation_23__bases;
        tmp_assign_source_182 = SELECT_METACLASS(tstate, tmp_metaclass_value_22, tmp_bases_value_22);
        Py_DECREF(tmp_metaclass_value_22);
        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        assert(tmp_class_creation_23__metaclass == NULL);
        tmp_class_creation_23__metaclass = tmp_assign_source_182;
    }
    {
        bool tmp_condition_result_86;
        PyObject *tmp_expression_value_128;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_128 = tmp_class_creation_23__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_128, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        tmp_condition_result_86 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_86 != false) {
            goto branch_yes_64;
        } else {
            goto branch_no_64;
        }
    }
    branch_yes_64:;
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_value_44;
        PyObject *tmp_tuple_element_85;
        PyObject *tmp_kwargs_value_44;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_129 = tmp_class_creation_23__metaclass;
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[23]);
        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        tmp_tuple_element_85 = mod_consts[314];
        tmp_args_value_44 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_85);
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_tuple_element_85 = tmp_class_creation_23__bases;
        PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_85);
        CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
        tmp_kwargs_value_44 = tmp_class_creation_23__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1136;
        tmp_assign_source_183 = CALL_FUNCTION(tstate, tmp_called_value_70, tmp_args_value_44, tmp_kwargs_value_44);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_value_44);
        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_183;
    }
    {
        bool tmp_condition_result_87;
        PyObject *tmp_operand_value_22;
        PyObject *tmp_expression_value_130;
        CHECK_OBJECT(tmp_class_creation_23__prepared);
        tmp_expression_value_130 = tmp_class_creation_23__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_130, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        tmp_operand_value_22 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_87 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_87 != false) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
    }
    branch_yes_65:;
    {
        PyObject *tmp_raise_type_22;
        PyObject *tmp_raise_value_22;
        PyObject *tmp_mod_expr_left_22;
        PyObject *tmp_mod_expr_right_22;
        PyObject *tmp_tuple_element_86;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_name_value_25;
        PyObject *tmp_default_value_22;
        tmp_raise_type_22 = PyExc_TypeError;
        tmp_mod_expr_left_22 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_131 = tmp_class_creation_23__metaclass;
        tmp_name_value_25 = mod_consts[2];
        tmp_default_value_22 = mod_consts[27];
        tmp_tuple_element_86 = BUILTIN_GETATTR(tstate, tmp_expression_value_131, tmp_name_value_25, tmp_default_value_22);
        if (tmp_tuple_element_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        tmp_mod_expr_right_22 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_132;
            PyObject *tmp_type_arg_44;
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 0, tmp_tuple_element_86);
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_type_arg_44 = tmp_class_creation_23__prepared;
            tmp_expression_value_132 = BUILTIN_TYPE1(tmp_type_arg_44);
            assert(!(tmp_expression_value_132 == NULL));
            tmp_tuple_element_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[2]);
            Py_DECREF(tmp_expression_value_132);
            if (tmp_tuple_element_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1136;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 1, tmp_tuple_element_86);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_mod_expr_right_22);
        goto try_except_handler_67;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_raise_value_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
        Py_DECREF(tmp_mod_expr_right_22);
        if (tmp_raise_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_67;
        }
        exception_type = tmp_raise_type_22;
        Py_INCREF(tmp_raise_type_22);
        exception_value = tmp_raise_value_22;
        exception_lineno = 1136;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_67;
    }
    branch_no_65:;
    goto branch_end_64;
    branch_no_64:;
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_184;
    }
    branch_end_64:;
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_called_value_71;
        PyObject *tmp_called_value_72;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto try_except_handler_67;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto try_except_handler_67;
        }
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1135;
        tmp_called_value_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_5);
        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto try_except_handler_67;
        }
        {
            PyObject *tmp_set_locals_23;
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_set_locals_23 = tmp_class_creation_23__prepared;
            locals_zope$interface$interfaces$$$class__23_Registered_1136 = tmp_set_locals_23;
            Py_INCREF(tmp_set_locals_23);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__23_Registered_1136, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_69;
        }
        tmp_dictset_value = mod_consts[314];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__23_Registered_1136, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_69;
        }
        {
            nuitka_bool tmp_condition_result_88;
            PyObject *tmp_cmp_expr_left_22;
            PyObject *tmp_cmp_expr_right_22;
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_cmp_expr_left_22 = tmp_class_creation_23__bases;
            CHECK_OBJECT(tmp_class_creation_23__bases_orig);
            tmp_cmp_expr_right_22 = tmp_class_creation_23__bases_orig;
            tmp_condition_result_88 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
            if (tmp_condition_result_88 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1136;

                goto try_except_handler_69;
            }
            if (tmp_condition_result_88 == NUITKA_BOOL_TRUE) {
                goto branch_yes_66;
            } else {
                goto branch_no_66;
            }
        }
        branch_yes_66:;
        CHECK_OBJECT(tmp_class_creation_23__bases_orig);
        tmp_dictset_value = tmp_class_creation_23__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__23_Registered_1136, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1136;

            goto try_except_handler_69;
        }
        branch_no_66:;
        {
            PyObject *tmp_assign_source_186;
            PyObject *tmp_called_value_73;
            PyObject *tmp_args_value_45;
            PyObject *tmp_tuple_element_87;
            PyObject *tmp_kwargs_value_45;
            CHECK_OBJECT(tmp_class_creation_23__metaclass);
            tmp_called_value_73 = tmp_class_creation_23__metaclass;
            tmp_tuple_element_87 = mod_consts[314];
            tmp_args_value_45 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_87);
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_tuple_element_87 = tmp_class_creation_23__bases;
            PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_87);
            tmp_tuple_element_87 = locals_zope$interface$interfaces$$$class__23_Registered_1136;
            PyTuple_SET_ITEM0(tmp_args_value_45, 2, tmp_tuple_element_87);
            CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
            tmp_kwargs_value_45 = tmp_class_creation_23__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1136;
            tmp_assign_source_186 = CALL_FUNCTION(tstate, tmp_called_value_73, tmp_args_value_45, tmp_kwargs_value_45);
            Py_DECREF(tmp_args_value_45);
            if (tmp_assign_source_186 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1136;

                goto try_except_handler_69;
            }
            assert(outline_22_var___class__ == NULL);
            outline_22_var___class__ = tmp_assign_source_186;
        }
        CHECK_OBJECT(outline_22_var___class__);
        tmp_args_element_value_6 = outline_22_var___class__;
        Py_INCREF(tmp_args_element_value_6);
        goto try_return_handler_69;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_69:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__23_Registered_1136);
        locals_zope$interface$interfaces$$$class__23_Registered_1136 = NULL;
        goto try_return_handler_68;
        // Exception handler code:
        try_except_handler_69:;
        exception_keeper_type_67 = exception_type;
        exception_keeper_value_67 = exception_value;
        exception_keeper_tb_67 = exception_tb;
        exception_keeper_lineno_67 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__23_Registered_1136);
        locals_zope$interface$interfaces$$$class__23_Registered_1136 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_67;
        exception_value = exception_keeper_value_67;
        exception_tb = exception_keeper_tb_67;
        exception_lineno = exception_keeper_lineno_67;

        goto try_except_handler_68;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_68:;
        CHECK_OBJECT(outline_22_var___class__);
        Py_DECREF(outline_22_var___class__);
        outline_22_var___class__ = NULL;
        goto outline_result_23;
        // Exception handler code:
        try_except_handler_68:;
        exception_keeper_type_68 = exception_type;
        exception_keeper_value_68 = exception_value;
        exception_keeper_tb_68 = exception_tb;
        exception_keeper_lineno_68 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_68;
        exception_value = exception_keeper_value_68;
        exception_tb = exception_keeper_tb_68;
        exception_lineno = exception_keeper_lineno_68;

        goto outline_exception_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_23:;
        exception_lineno = 1136;
        goto try_except_handler_67;
        outline_result_23:;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1135;
        tmp_assign_source_185 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_71);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1135;

            goto try_except_handler_67;
        }
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_185);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_67:;
    exception_keeper_type_69 = exception_type;
    exception_keeper_value_69 = exception_value;
    exception_keeper_tb_69 = exception_tb;
    exception_keeper_lineno_69 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_23__bases_orig);
    tmp_class_creation_23__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    Py_XDECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_69;
    exception_value = exception_keeper_value_69;
    exception_tb = exception_keeper_tb_69;
    exception_lineno = exception_keeper_lineno_69;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_class_creation_23__bases_orig);
    Py_DECREF(tmp_class_creation_23__bases_orig);
    tmp_class_creation_23__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_23__bases);
    Py_DECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
    Py_DECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_23__metaclass);
    Py_DECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_23__prepared);
    Py_DECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_tuple_element_88;
        tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[306]);

        if (unlikely(tmp_tuple_element_88 == NULL)) {
            tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[306]);
        }

        if (tmp_tuple_element_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        tmp_assign_source_187 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_187, 0, tmp_tuple_element_88);
        assert(tmp_class_creation_24__bases_orig == NULL);
        tmp_class_creation_24__bases_orig = tmp_assign_source_187;
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_dircall_arg1_23;
        CHECK_OBJECT(tmp_class_creation_24__bases_orig);
        tmp_dircall_arg1_23 = tmp_class_creation_24__bases_orig;
        Py_INCREF(tmp_dircall_arg1_23);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_23};
            tmp_assign_source_188 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        assert(tmp_class_creation_24__bases == NULL);
        tmp_class_creation_24__bases = tmp_assign_source_188;
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__class_decl_dict == NULL);
        tmp_class_creation_24__class_decl_dict = tmp_assign_source_189;
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_metaclass_value_23;
        nuitka_bool tmp_condition_result_89;
        int tmp_truth_name_23;
        PyObject *tmp_type_arg_45;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_bases_value_23;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_truth_name_23 = CHECK_IF_TRUE(tmp_class_creation_24__bases);
        if (tmp_truth_name_23 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        tmp_condition_result_89 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_expression_value_133 = tmp_class_creation_24__bases;
        tmp_subscript_value_23 = mod_consts[14];
        tmp_type_arg_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_133, tmp_subscript_value_23, 0);
        if (tmp_type_arg_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        tmp_metaclass_value_23 = BUILTIN_TYPE1(tmp_type_arg_45);
        Py_DECREF(tmp_type_arg_45);
        if (tmp_metaclass_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        tmp_metaclass_value_23 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_23);
        condexpr_end_23:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_bases_value_23 = tmp_class_creation_24__bases;
        tmp_assign_source_190 = SELECT_METACLASS(tstate, tmp_metaclass_value_23, tmp_bases_value_23);
        Py_DECREF(tmp_metaclass_value_23);
        if (tmp_assign_source_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        assert(tmp_class_creation_24__metaclass == NULL);
        tmp_class_creation_24__metaclass = tmp_assign_source_190;
    }
    {
        bool tmp_condition_result_90;
        PyObject *tmp_expression_value_134;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_134 = tmp_class_creation_24__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_134, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        tmp_condition_result_90 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_90 != false) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_args_value_46;
        PyObject *tmp_tuple_element_89;
        PyObject *tmp_kwargs_value_46;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_135 = tmp_class_creation_24__metaclass;
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[23]);
        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        tmp_tuple_element_89 = mod_consts[315];
        tmp_args_value_46 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_46, 0, tmp_tuple_element_89);
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_tuple_element_89 = tmp_class_creation_24__bases;
        PyTuple_SET_ITEM0(tmp_args_value_46, 1, tmp_tuple_element_89);
        CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
        tmp_kwargs_value_46 = tmp_class_creation_24__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1139;
        tmp_assign_source_191 = CALL_FUNCTION(tstate, tmp_called_value_74, tmp_args_value_46, tmp_kwargs_value_46);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_value_46);
        if (tmp_assign_source_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_191;
    }
    {
        bool tmp_condition_result_91;
        PyObject *tmp_operand_value_23;
        PyObject *tmp_expression_value_136;
        CHECK_OBJECT(tmp_class_creation_24__prepared);
        tmp_expression_value_136 = tmp_class_creation_24__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_136, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        tmp_operand_value_23 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_23);
        assert(!(tmp_res == -1));
        tmp_condition_result_91 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_91 != false) {
            goto branch_yes_68;
        } else {
            goto branch_no_68;
        }
    }
    branch_yes_68:;
    {
        PyObject *tmp_raise_type_23;
        PyObject *tmp_raise_value_23;
        PyObject *tmp_mod_expr_left_23;
        PyObject *tmp_mod_expr_right_23;
        PyObject *tmp_tuple_element_90;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_name_value_26;
        PyObject *tmp_default_value_23;
        tmp_raise_type_23 = PyExc_TypeError;
        tmp_mod_expr_left_23 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_137 = tmp_class_creation_24__metaclass;
        tmp_name_value_26 = mod_consts[2];
        tmp_default_value_23 = mod_consts[27];
        tmp_tuple_element_90 = BUILTIN_GETATTR(tstate, tmp_expression_value_137, tmp_name_value_26, tmp_default_value_23);
        if (tmp_tuple_element_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        tmp_mod_expr_right_23 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_138;
            PyObject *tmp_type_arg_46;
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 0, tmp_tuple_element_90);
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_type_arg_46 = tmp_class_creation_24__prepared;
            tmp_expression_value_138 = BUILTIN_TYPE1(tmp_type_arg_46);
            assert(!(tmp_expression_value_138 == NULL));
            tmp_tuple_element_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[2]);
            Py_DECREF(tmp_expression_value_138);
            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1139;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 1, tmp_tuple_element_90);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_mod_expr_right_23);
        goto try_except_handler_70;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_raise_value_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
        Py_DECREF(tmp_mod_expr_right_23);
        if (tmp_raise_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_70;
        }
        exception_type = tmp_raise_type_23;
        Py_INCREF(tmp_raise_type_23);
        exception_value = tmp_raise_value_23;
        exception_lineno = 1139;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_70;
    }
    branch_no_68:;
    goto branch_end_67;
    branch_no_67:;
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_192;
    }
    branch_end_67:;
    {
        PyObject *tmp_assign_source_193;
        {
            PyObject *tmp_set_locals_24;
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_set_locals_24 = tmp_class_creation_24__prepared;
            locals_zope$interface$interfaces$$$class__24_IUnregistered_1139 = tmp_set_locals_24;
            Py_INCREF(tmp_set_locals_24);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__24_IUnregistered_1139, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_72;
        }
        tmp_dictset_value = mod_consts[316];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__24_IUnregistered_1139, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_72;
        }
        tmp_dictset_value = mod_consts[315];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__24_IUnregistered_1139, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_72;
        }
        {
            nuitka_bool tmp_condition_result_92;
            PyObject *tmp_cmp_expr_left_23;
            PyObject *tmp_cmp_expr_right_23;
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_cmp_expr_left_23 = tmp_class_creation_24__bases;
            CHECK_OBJECT(tmp_class_creation_24__bases_orig);
            tmp_cmp_expr_right_23 = tmp_class_creation_24__bases_orig;
            tmp_condition_result_92 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
            if (tmp_condition_result_92 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1139;

                goto try_except_handler_72;
            }
            if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
                goto branch_yes_69;
            } else {
                goto branch_no_69;
            }
        }
        branch_yes_69:;
        CHECK_OBJECT(tmp_class_creation_24__bases_orig);
        tmp_dictset_value = tmp_class_creation_24__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__24_IUnregistered_1139, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1139;

            goto try_except_handler_72;
        }
        branch_no_69:;
        {
            PyObject *tmp_assign_source_194;
            PyObject *tmp_called_value_75;
            PyObject *tmp_args_value_47;
            PyObject *tmp_tuple_element_91;
            PyObject *tmp_kwargs_value_47;
            CHECK_OBJECT(tmp_class_creation_24__metaclass);
            tmp_called_value_75 = tmp_class_creation_24__metaclass;
            tmp_tuple_element_91 = mod_consts[315];
            tmp_args_value_47 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_47, 0, tmp_tuple_element_91);
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_tuple_element_91 = tmp_class_creation_24__bases;
            PyTuple_SET_ITEM0(tmp_args_value_47, 1, tmp_tuple_element_91);
            tmp_tuple_element_91 = locals_zope$interface$interfaces$$$class__24_IUnregistered_1139;
            PyTuple_SET_ITEM0(tmp_args_value_47, 2, tmp_tuple_element_91);
            CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
            tmp_kwargs_value_47 = tmp_class_creation_24__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1139;
            tmp_assign_source_194 = CALL_FUNCTION(tstate, tmp_called_value_75, tmp_args_value_47, tmp_kwargs_value_47);
            Py_DECREF(tmp_args_value_47);
            if (tmp_assign_source_194 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1139;

                goto try_except_handler_72;
            }
            assert(outline_23_var___class__ == NULL);
            outline_23_var___class__ = tmp_assign_source_194;
        }
        CHECK_OBJECT(outline_23_var___class__);
        tmp_assign_source_193 = outline_23_var___class__;
        Py_INCREF(tmp_assign_source_193);
        goto try_return_handler_72;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_72:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__24_IUnregistered_1139);
        locals_zope$interface$interfaces$$$class__24_IUnregistered_1139 = NULL;
        goto try_return_handler_71;
        // Exception handler code:
        try_except_handler_72:;
        exception_keeper_type_70 = exception_type;
        exception_keeper_value_70 = exception_value;
        exception_keeper_tb_70 = exception_tb;
        exception_keeper_lineno_70 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__24_IUnregistered_1139);
        locals_zope$interface$interfaces$$$class__24_IUnregistered_1139 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_70;
        exception_value = exception_keeper_value_70;
        exception_tb = exception_keeper_tb_70;
        exception_lineno = exception_keeper_lineno_70;

        goto try_except_handler_71;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_71:;
        CHECK_OBJECT(outline_23_var___class__);
        Py_DECREF(outline_23_var___class__);
        outline_23_var___class__ = NULL;
        goto outline_result_24;
        // Exception handler code:
        try_except_handler_71:;
        exception_keeper_type_71 = exception_type;
        exception_keeper_value_71 = exception_value;
        exception_keeper_tb_71 = exception_tb;
        exception_keeper_lineno_71 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_71;
        exception_value = exception_keeper_value_71;
        exception_tb = exception_keeper_tb_71;
        exception_lineno = exception_keeper_lineno_71;

        goto outline_exception_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_24:;
        exception_lineno = 1139;
        goto try_except_handler_70;
        outline_result_24:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_193);
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_70:;
    exception_keeper_type_72 = exception_type;
    exception_keeper_value_72 = exception_value;
    exception_keeper_tb_72 = exception_tb;
    exception_keeper_lineno_72 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_24__bases_orig);
    tmp_class_creation_24__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    Py_XDECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_72;
    exception_value = exception_keeper_value_72;
    exception_tb = exception_keeper_tb_72;
    exception_lineno = exception_keeper_lineno_72;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_class_creation_24__bases_orig);
    Py_DECREF(tmp_class_creation_24__bases_orig);
    tmp_class_creation_24__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_24__bases);
    Py_DECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
    Py_DECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_24__metaclass);
    Py_DECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_24__prepared);
    Py_DECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_tuple_element_92;
        tmp_tuple_element_92 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[308]);

        if (unlikely(tmp_tuple_element_92 == NULL)) {
            tmp_tuple_element_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[308]);
        }

        if (tmp_tuple_element_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        tmp_assign_source_195 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_195, 0, tmp_tuple_element_92);
        assert(tmp_class_creation_25__bases_orig == NULL);
        tmp_class_creation_25__bases_orig = tmp_assign_source_195;
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_dircall_arg1_24;
        CHECK_OBJECT(tmp_class_creation_25__bases_orig);
        tmp_dircall_arg1_24 = tmp_class_creation_25__bases_orig;
        Py_INCREF(tmp_dircall_arg1_24);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_24};
            tmp_assign_source_196 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        assert(tmp_class_creation_25__bases == NULL);
        tmp_class_creation_25__bases = tmp_assign_source_196;
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_25__class_decl_dict == NULL);
        tmp_class_creation_25__class_decl_dict = tmp_assign_source_197;
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_metaclass_value_24;
        nuitka_bool tmp_condition_result_93;
        int tmp_truth_name_24;
        PyObject *tmp_type_arg_47;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_bases_value_24;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_truth_name_24 = CHECK_IF_TRUE(tmp_class_creation_25__bases);
        if (tmp_truth_name_24 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        tmp_condition_result_93 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_24;
        } else {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_expression_value_139 = tmp_class_creation_25__bases;
        tmp_subscript_value_24 = mod_consts[14];
        tmp_type_arg_47 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_139, tmp_subscript_value_24, 0);
        if (tmp_type_arg_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        tmp_metaclass_value_24 = BUILTIN_TYPE1(tmp_type_arg_47);
        Py_DECREF(tmp_type_arg_47);
        if (tmp_metaclass_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        tmp_metaclass_value_24 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_24);
        condexpr_end_24:;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_bases_value_24 = tmp_class_creation_25__bases;
        tmp_assign_source_198 = SELECT_METACLASS(tstate, tmp_metaclass_value_24, tmp_bases_value_24);
        Py_DECREF(tmp_metaclass_value_24);
        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        assert(tmp_class_creation_25__metaclass == NULL);
        tmp_class_creation_25__metaclass = tmp_assign_source_198;
    }
    {
        bool tmp_condition_result_94;
        PyObject *tmp_expression_value_140;
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_140 = tmp_class_creation_25__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_140, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        tmp_condition_result_94 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_94 != false) {
            goto branch_yes_70;
        } else {
            goto branch_no_70;
        }
    }
    branch_yes_70:;
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_args_value_48;
        PyObject *tmp_tuple_element_93;
        PyObject *tmp_kwargs_value_48;
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_141 = tmp_class_creation_25__metaclass;
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[23]);
        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        tmp_tuple_element_93 = mod_consts[317];
        tmp_args_value_48 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_48, 0, tmp_tuple_element_93);
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_tuple_element_93 = tmp_class_creation_25__bases;
        PyTuple_SET_ITEM0(tmp_args_value_48, 1, tmp_tuple_element_93);
        CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
        tmp_kwargs_value_48 = tmp_class_creation_25__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1144;
        tmp_assign_source_199 = CALL_FUNCTION(tstate, tmp_called_value_76, tmp_args_value_48, tmp_kwargs_value_48);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_value_48);
        if (tmp_assign_source_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        assert(tmp_class_creation_25__prepared == NULL);
        tmp_class_creation_25__prepared = tmp_assign_source_199;
    }
    {
        bool tmp_condition_result_95;
        PyObject *tmp_operand_value_24;
        PyObject *tmp_expression_value_142;
        CHECK_OBJECT(tmp_class_creation_25__prepared);
        tmp_expression_value_142 = tmp_class_creation_25__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_142, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        tmp_operand_value_24 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_95 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_95 != false) {
            goto branch_yes_71;
        } else {
            goto branch_no_71;
        }
    }
    branch_yes_71:;
    {
        PyObject *tmp_raise_type_24;
        PyObject *tmp_raise_value_24;
        PyObject *tmp_mod_expr_left_24;
        PyObject *tmp_mod_expr_right_24;
        PyObject *tmp_tuple_element_94;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_name_value_27;
        PyObject *tmp_default_value_24;
        tmp_raise_type_24 = PyExc_TypeError;
        tmp_mod_expr_left_24 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_143 = tmp_class_creation_25__metaclass;
        tmp_name_value_27 = mod_consts[2];
        tmp_default_value_24 = mod_consts[27];
        tmp_tuple_element_94 = BUILTIN_GETATTR(tstate, tmp_expression_value_143, tmp_name_value_27, tmp_default_value_24);
        if (tmp_tuple_element_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        tmp_mod_expr_right_24 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_144;
            PyObject *tmp_type_arg_48;
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 0, tmp_tuple_element_94);
            CHECK_OBJECT(tmp_class_creation_25__prepared);
            tmp_type_arg_48 = tmp_class_creation_25__prepared;
            tmp_expression_value_144 = BUILTIN_TYPE1(tmp_type_arg_48);
            assert(!(tmp_expression_value_144 == NULL));
            tmp_tuple_element_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[2]);
            Py_DECREF(tmp_expression_value_144);
            if (tmp_tuple_element_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1144;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 1, tmp_tuple_element_94);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_mod_expr_right_24);
        goto try_except_handler_73;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_raise_value_24 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
        Py_DECREF(tmp_mod_expr_right_24);
        if (tmp_raise_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_73;
        }
        exception_type = tmp_raise_type_24;
        Py_INCREF(tmp_raise_type_24);
        exception_value = tmp_raise_value_24;
        exception_lineno = 1144;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_73;
    }
    branch_no_71:;
    goto branch_end_70;
    branch_no_70:;
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_25__prepared == NULL);
        tmp_class_creation_25__prepared = tmp_assign_source_200;
    }
    branch_end_70:;
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_called_value_77;
        PyObject *tmp_called_value_78;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto try_except_handler_73;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[315]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[315]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto try_except_handler_73;
        }
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1143;
        tmp_called_value_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_7);
        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto try_except_handler_73;
        }
        {
            PyObject *tmp_set_locals_25;
            CHECK_OBJECT(tmp_class_creation_25__prepared);
            tmp_set_locals_25 = tmp_class_creation_25__prepared;
            locals_zope$interface$interfaces$$$class__25_Unregistered_1144 = tmp_set_locals_25;
            Py_INCREF(tmp_set_locals_25);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__25_Unregistered_1144, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_75;
        }
        tmp_dictset_value = mod_consts[316];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__25_Unregistered_1144, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_75;
        }
        tmp_dictset_value = mod_consts[317];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__25_Unregistered_1144, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_75;
        }
        {
            nuitka_bool tmp_condition_result_96;
            PyObject *tmp_cmp_expr_left_24;
            PyObject *tmp_cmp_expr_right_24;
            CHECK_OBJECT(tmp_class_creation_25__bases);
            tmp_cmp_expr_left_24 = tmp_class_creation_25__bases;
            CHECK_OBJECT(tmp_class_creation_25__bases_orig);
            tmp_cmp_expr_right_24 = tmp_class_creation_25__bases_orig;
            tmp_condition_result_96 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
            if (tmp_condition_result_96 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1144;

                goto try_except_handler_75;
            }
            if (tmp_condition_result_96 == NUITKA_BOOL_TRUE) {
                goto branch_yes_72;
            } else {
                goto branch_no_72;
            }
        }
        branch_yes_72:;
        CHECK_OBJECT(tmp_class_creation_25__bases_orig);
        tmp_dictset_value = tmp_class_creation_25__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__25_Unregistered_1144, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto try_except_handler_75;
        }
        branch_no_72:;
        {
            PyObject *tmp_assign_source_202;
            PyObject *tmp_called_value_79;
            PyObject *tmp_args_value_49;
            PyObject *tmp_tuple_element_95;
            PyObject *tmp_kwargs_value_49;
            CHECK_OBJECT(tmp_class_creation_25__metaclass);
            tmp_called_value_79 = tmp_class_creation_25__metaclass;
            tmp_tuple_element_95 = mod_consts[317];
            tmp_args_value_49 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_49, 0, tmp_tuple_element_95);
            CHECK_OBJECT(tmp_class_creation_25__bases);
            tmp_tuple_element_95 = tmp_class_creation_25__bases;
            PyTuple_SET_ITEM0(tmp_args_value_49, 1, tmp_tuple_element_95);
            tmp_tuple_element_95 = locals_zope$interface$interfaces$$$class__25_Unregistered_1144;
            PyTuple_SET_ITEM0(tmp_args_value_49, 2, tmp_tuple_element_95);
            CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
            tmp_kwargs_value_49 = tmp_class_creation_25__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1144;
            tmp_assign_source_202 = CALL_FUNCTION(tstate, tmp_called_value_79, tmp_args_value_49, tmp_kwargs_value_49);
            Py_DECREF(tmp_args_value_49);
            if (tmp_assign_source_202 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1144;

                goto try_except_handler_75;
            }
            assert(outline_24_var___class__ == NULL);
            outline_24_var___class__ = tmp_assign_source_202;
        }
        CHECK_OBJECT(outline_24_var___class__);
        tmp_args_element_value_8 = outline_24_var___class__;
        Py_INCREF(tmp_args_element_value_8);
        goto try_return_handler_75;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_75:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__25_Unregistered_1144);
        locals_zope$interface$interfaces$$$class__25_Unregistered_1144 = NULL;
        goto try_return_handler_74;
        // Exception handler code:
        try_except_handler_75:;
        exception_keeper_type_73 = exception_type;
        exception_keeper_value_73 = exception_value;
        exception_keeper_tb_73 = exception_tb;
        exception_keeper_lineno_73 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__25_Unregistered_1144);
        locals_zope$interface$interfaces$$$class__25_Unregistered_1144 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_73;
        exception_value = exception_keeper_value_73;
        exception_tb = exception_keeper_tb_73;
        exception_lineno = exception_keeper_lineno_73;

        goto try_except_handler_74;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_74:;
        CHECK_OBJECT(outline_24_var___class__);
        Py_DECREF(outline_24_var___class__);
        outline_24_var___class__ = NULL;
        goto outline_result_25;
        // Exception handler code:
        try_except_handler_74:;
        exception_keeper_type_74 = exception_type;
        exception_keeper_value_74 = exception_value;
        exception_keeper_tb_74 = exception_tb;
        exception_keeper_lineno_74 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_74;
        exception_value = exception_keeper_value_74;
        exception_tb = exception_keeper_tb_74;
        exception_lineno = exception_keeper_lineno_74;

        goto outline_exception_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_25:;
        exception_lineno = 1144;
        goto try_except_handler_73;
        outline_result_25:;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1143;
        tmp_assign_source_201 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_77);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;

            goto try_except_handler_73;
        }
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_201);
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_73:;
    exception_keeper_type_75 = exception_type;
    exception_keeper_value_75 = exception_value;
    exception_keeper_tb_75 = exception_tb;
    exception_keeper_lineno_75 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_25__bases_orig);
    tmp_class_creation_25__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_25__bases);
    tmp_class_creation_25__bases = NULL;
    Py_XDECREF(tmp_class_creation_25__class_decl_dict);
    tmp_class_creation_25__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_25__prepared);
    tmp_class_creation_25__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_75;
    exception_value = exception_keeper_value_75;
    exception_tb = exception_keeper_tb_75;
    exception_lineno = exception_keeper_lineno_75;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_class_creation_25__bases_orig);
    Py_DECREF(tmp_class_creation_25__bases_orig);
    tmp_class_creation_25__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_25__bases);
    Py_DECREF(tmp_class_creation_25__bases);
    tmp_class_creation_25__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
    Py_DECREF(tmp_class_creation_25__class_decl_dict);
    tmp_class_creation_25__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_25__metaclass);
    Py_DECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_25__prepared);
    Py_DECREF(tmp_class_creation_25__prepared);
    tmp_class_creation_25__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_tuple_element_96;
        tmp_tuple_element_96 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_96 == NULL)) {
            tmp_tuple_element_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        tmp_assign_source_203 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_203, 0, tmp_tuple_element_96);
        assert(tmp_class_creation_26__bases_orig == NULL);
        tmp_class_creation_26__bases_orig = tmp_assign_source_203;
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_dircall_arg1_25;
        CHECK_OBJECT(tmp_class_creation_26__bases_orig);
        tmp_dircall_arg1_25 = tmp_class_creation_26__bases_orig;
        Py_INCREF(tmp_dircall_arg1_25);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_25};
            tmp_assign_source_204 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        assert(tmp_class_creation_26__bases == NULL);
        tmp_class_creation_26__bases = tmp_assign_source_204;
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_26__class_decl_dict == NULL);
        tmp_class_creation_26__class_decl_dict = tmp_assign_source_205;
    }
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_metaclass_value_25;
        nuitka_bool tmp_condition_result_97;
        int tmp_truth_name_25;
        PyObject *tmp_type_arg_49;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_bases_value_25;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_truth_name_25 = CHECK_IF_TRUE(tmp_class_creation_26__bases);
        if (tmp_truth_name_25 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        tmp_condition_result_97 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_97 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_25;
        } else {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_expression_value_145 = tmp_class_creation_26__bases;
        tmp_subscript_value_25 = mod_consts[14];
        tmp_type_arg_49 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_145, tmp_subscript_value_25, 0);
        if (tmp_type_arg_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        tmp_metaclass_value_25 = BUILTIN_TYPE1(tmp_type_arg_49);
        Py_DECREF(tmp_type_arg_49);
        if (tmp_metaclass_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        goto condexpr_end_25;
        condexpr_false_25:;
        tmp_metaclass_value_25 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_25);
        condexpr_end_25:;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_bases_value_25 = tmp_class_creation_26__bases;
        tmp_assign_source_206 = SELECT_METACLASS(tstate, tmp_metaclass_value_25, tmp_bases_value_25);
        Py_DECREF(tmp_metaclass_value_25);
        if (tmp_assign_source_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        assert(tmp_class_creation_26__metaclass == NULL);
        tmp_class_creation_26__metaclass = tmp_assign_source_206;
    }
    {
        bool tmp_condition_result_98;
        PyObject *tmp_expression_value_146;
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_146 = tmp_class_creation_26__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_146, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        tmp_condition_result_98 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_98 != false) {
            goto branch_yes_73;
        } else {
            goto branch_no_73;
        }
    }
    branch_yes_73:;
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_args_value_50;
        PyObject *tmp_tuple_element_97;
        PyObject *tmp_kwargs_value_50;
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_147 = tmp_class_creation_26__metaclass;
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[23]);
        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        tmp_tuple_element_97 = mod_consts[318];
        tmp_args_value_50 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_50, 0, tmp_tuple_element_97);
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_tuple_element_97 = tmp_class_creation_26__bases;
        PyTuple_SET_ITEM0(tmp_args_value_50, 1, tmp_tuple_element_97);
        CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
        tmp_kwargs_value_50 = tmp_class_creation_26__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1149;
        tmp_assign_source_207 = CALL_FUNCTION(tstate, tmp_called_value_80, tmp_args_value_50, tmp_kwargs_value_50);
        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_value_50);
        if (tmp_assign_source_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        assert(tmp_class_creation_26__prepared == NULL);
        tmp_class_creation_26__prepared = tmp_assign_source_207;
    }
    {
        bool tmp_condition_result_99;
        PyObject *tmp_operand_value_25;
        PyObject *tmp_expression_value_148;
        CHECK_OBJECT(tmp_class_creation_26__prepared);
        tmp_expression_value_148 = tmp_class_creation_26__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_148, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        tmp_operand_value_25 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_99 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_99 != false) {
            goto branch_yes_74;
        } else {
            goto branch_no_74;
        }
    }
    branch_yes_74:;
    {
        PyObject *tmp_raise_type_25;
        PyObject *tmp_raise_value_25;
        PyObject *tmp_mod_expr_left_25;
        PyObject *tmp_mod_expr_right_25;
        PyObject *tmp_tuple_element_98;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_name_value_28;
        PyObject *tmp_default_value_25;
        tmp_raise_type_25 = PyExc_TypeError;
        tmp_mod_expr_left_25 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_149 = tmp_class_creation_26__metaclass;
        tmp_name_value_28 = mod_consts[2];
        tmp_default_value_25 = mod_consts[27];
        tmp_tuple_element_98 = BUILTIN_GETATTR(tstate, tmp_expression_value_149, tmp_name_value_28, tmp_default_value_25);
        if (tmp_tuple_element_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        tmp_mod_expr_right_25 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_150;
            PyObject *tmp_type_arg_50;
            PyTuple_SET_ITEM(tmp_mod_expr_right_25, 0, tmp_tuple_element_98);
            CHECK_OBJECT(tmp_class_creation_26__prepared);
            tmp_type_arg_50 = tmp_class_creation_26__prepared;
            tmp_expression_value_150 = BUILTIN_TYPE1(tmp_type_arg_50);
            assert(!(tmp_expression_value_150 == NULL));
            tmp_tuple_element_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[2]);
            Py_DECREF(tmp_expression_value_150);
            if (tmp_tuple_element_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1149;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_25, 1, tmp_tuple_element_98);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_mod_expr_right_25);
        goto try_except_handler_76;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_raise_value_25 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_25, tmp_mod_expr_right_25);
        Py_DECREF(tmp_mod_expr_right_25);
        if (tmp_raise_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_76;
        }
        exception_type = tmp_raise_type_25;
        Py_INCREF(tmp_raise_type_25);
        exception_value = tmp_raise_value_25;
        exception_lineno = 1149;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_76;
    }
    branch_no_74:;
    goto branch_end_73;
    branch_no_73:;
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_26__prepared == NULL);
        tmp_class_creation_26__prepared = tmp_assign_source_208;
    }
    branch_end_73:;
    {
        PyObject *tmp_assign_source_209;
        {
            PyObject *tmp_set_locals_26;
            CHECK_OBJECT(tmp_class_creation_26__prepared);
            tmp_set_locals_26 = tmp_class_creation_26__prepared;
            locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149 = tmp_set_locals_26;
            Py_INCREF(tmp_set_locals_26);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_78;
        }
        tmp_dictset_value = mod_consts[319];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_78;
        }
        tmp_dictset_value = mod_consts[318];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_78;
        }
        frame_f78e9333d9a08fe1610642a108267930_17 = MAKE_CLASS_FRAME(tstate, codeobj_f78e9333d9a08fe1610642a108267930, module_zope$interface$interfaces, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_f78e9333d9a08fe1610642a108267930_17);
        assert(Py_REFCNT(frame_f78e9333d9a08fe1610642a108267930_17) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_20;
            tmp_defaults_20 = mod_consts[320];
            Py_INCREF(tmp_defaults_20);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__71_registerUtility(tmp_defaults_20);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[322], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1153;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }
        {
            PyObject *tmp_defaults_21;
            tmp_defaults_21 = mod_consts[324];
            Py_INCREF(tmp_defaults_21);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__72_unregisterUtility(tmp_defaults_21);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[326], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1181;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__73_registeredUtilities();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[329], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1214;
            type_description_2 = "o";
            goto frame_exception_exit_17;
        }
        {
            PyObject *tmp_defaults_22;
            tmp_defaults_22 = mod_consts[331];
            Py_INCREF(tmp_defaults_22);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__74_registerAdapter(tmp_defaults_22);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[333], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1221;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }
        {
            PyObject *tmp_defaults_23;
            tmp_defaults_23 = mod_consts[335];
            Py_INCREF(tmp_defaults_23);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__75_unregisterAdapter(tmp_defaults_23);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[337], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1256;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__76_registeredAdapters();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[340], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1298;
            type_description_2 = "o";
            goto frame_exception_exit_17;
        }
        {
            PyObject *tmp_defaults_24;
            tmp_defaults_24 = mod_consts[331];
            Py_INCREF(tmp_defaults_24);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__77_registerSubscriptionAdapter(tmp_defaults_24);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[343], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1305;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }
        {
            PyObject *tmp_defaults_25;
            tmp_defaults_25 = mod_consts[335];
            Py_INCREF(tmp_defaults_25);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__78_unregisterSubscriptionAdapter(tmp_defaults_25);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[346], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1343;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__79_registeredSubscriptionAdapters();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[349], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1389;
            type_description_2 = "o";
            goto frame_exception_exit_17;
        }
        {
            PyObject *tmp_defaults_26;
            tmp_defaults_26 = mod_consts[351];
            Py_INCREF(tmp_defaults_26);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__80_registerHandler(tmp_defaults_26);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[353], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1396;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }
        {
            PyObject *tmp_defaults_27;
            tmp_defaults_27 = mod_consts[355];
            Py_INCREF(tmp_defaults_27);


            tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__81_unregisterHandler(tmp_defaults_27);

            tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[357], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1431;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_zope$interface$interfaces$$$function__82_registeredHandlers();

        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[360], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;
            type_description_2 = "o";
            goto frame_exception_exit_17;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_16;
        frame_exception_exit_17:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f78e9333d9a08fe1610642a108267930_17, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f78e9333d9a08fe1610642a108267930_17->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f78e9333d9a08fe1610642a108267930_17, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f78e9333d9a08fe1610642a108267930_17,
            type_description_2,
            outline_25_var___class__
        );



        assertFrameObject(frame_f78e9333d9a08fe1610642a108267930_17);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_16;
        frame_no_exception_16:;
        goto skip_nested_handling_16;
        nested_frame_exit_16:;

        goto try_except_handler_78;
        skip_nested_handling_16:;
        {
            nuitka_bool tmp_condition_result_100;
            PyObject *tmp_cmp_expr_left_25;
            PyObject *tmp_cmp_expr_right_25;
            CHECK_OBJECT(tmp_class_creation_26__bases);
            tmp_cmp_expr_left_25 = tmp_class_creation_26__bases;
            CHECK_OBJECT(tmp_class_creation_26__bases_orig);
            tmp_cmp_expr_right_25 = tmp_class_creation_26__bases_orig;
            tmp_condition_result_100 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
            if (tmp_condition_result_100 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1149;

                goto try_except_handler_78;
            }
            if (tmp_condition_result_100 == NUITKA_BOOL_TRUE) {
                goto branch_yes_75;
            } else {
                goto branch_no_75;
            }
        }
        branch_yes_75:;
        CHECK_OBJECT(tmp_class_creation_26__bases_orig);
        tmp_dictset_value = tmp_class_creation_26__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1149;

            goto try_except_handler_78;
        }
        branch_no_75:;
        {
            PyObject *tmp_assign_source_210;
            PyObject *tmp_called_value_81;
            PyObject *tmp_args_value_51;
            PyObject *tmp_tuple_element_99;
            PyObject *tmp_kwargs_value_51;
            CHECK_OBJECT(tmp_class_creation_26__metaclass);
            tmp_called_value_81 = tmp_class_creation_26__metaclass;
            tmp_tuple_element_99 = mod_consts[318];
            tmp_args_value_51 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_51, 0, tmp_tuple_element_99);
            CHECK_OBJECT(tmp_class_creation_26__bases);
            tmp_tuple_element_99 = tmp_class_creation_26__bases;
            PyTuple_SET_ITEM0(tmp_args_value_51, 1, tmp_tuple_element_99);
            tmp_tuple_element_99 = locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149;
            PyTuple_SET_ITEM0(tmp_args_value_51, 2, tmp_tuple_element_99);
            CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
            tmp_kwargs_value_51 = tmp_class_creation_26__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1149;
            tmp_assign_source_210 = CALL_FUNCTION(tstate, tmp_called_value_81, tmp_args_value_51, tmp_kwargs_value_51);
            Py_DECREF(tmp_args_value_51);
            if (tmp_assign_source_210 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1149;

                goto try_except_handler_78;
            }
            assert(outline_25_var___class__ == NULL);
            outline_25_var___class__ = tmp_assign_source_210;
        }
        CHECK_OBJECT(outline_25_var___class__);
        tmp_assign_source_209 = outline_25_var___class__;
        Py_INCREF(tmp_assign_source_209);
        goto try_return_handler_78;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_78:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149);
        locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149 = NULL;
        goto try_return_handler_77;
        // Exception handler code:
        try_except_handler_78:;
        exception_keeper_type_76 = exception_type;
        exception_keeper_value_76 = exception_value;
        exception_keeper_tb_76 = exception_tb;
        exception_keeper_lineno_76 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149);
        locals_zope$interface$interfaces$$$class__26_IComponentRegistry_1149 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_76;
        exception_value = exception_keeper_value_76;
        exception_tb = exception_keeper_tb_76;
        exception_lineno = exception_keeper_lineno_76;

        goto try_except_handler_77;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_77:;
        CHECK_OBJECT(outline_25_var___class__);
        Py_DECREF(outline_25_var___class__);
        outline_25_var___class__ = NULL;
        goto outline_result_26;
        // Exception handler code:
        try_except_handler_77:;
        exception_keeper_type_77 = exception_type;
        exception_keeper_value_77 = exception_value;
        exception_keeper_tb_77 = exception_tb;
        exception_keeper_lineno_77 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_77;
        exception_value = exception_keeper_value_77;
        exception_tb = exception_keeper_tb_77;
        exception_lineno = exception_keeper_lineno_77;

        goto outline_exception_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_26:;
        exception_lineno = 1149;
        goto try_except_handler_76;
        outline_result_26:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_209);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_76:;
    exception_keeper_type_78 = exception_type;
    exception_keeper_value_78 = exception_value;
    exception_keeper_tb_78 = exception_tb;
    exception_keeper_lineno_78 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_26__bases_orig);
    tmp_class_creation_26__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_26__bases);
    tmp_class_creation_26__bases = NULL;
    Py_XDECREF(tmp_class_creation_26__class_decl_dict);
    tmp_class_creation_26__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_26__prepared);
    tmp_class_creation_26__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_78;
    exception_value = exception_keeper_value_78;
    exception_tb = exception_keeper_tb_78;
    exception_lineno = exception_keeper_lineno_78;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_class_creation_26__bases_orig);
    Py_DECREF(tmp_class_creation_26__bases_orig);
    tmp_class_creation_26__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_26__bases);
    Py_DECREF(tmp_class_creation_26__bases);
    tmp_class_creation_26__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
    Py_DECREF(tmp_class_creation_26__class_decl_dict);
    tmp_class_creation_26__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_26__metaclass);
    Py_DECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_26__prepared);
    Py_DECREF(tmp_class_creation_26__prepared);
    tmp_class_creation_26__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_tuple_element_100;
        tmp_tuple_element_100 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_tuple_element_100 == NULL)) {
            tmp_tuple_element_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[244]);
        }

        if (tmp_tuple_element_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        tmp_assign_source_211 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_211, 0, tmp_tuple_element_100);
        tmp_tuple_element_100 = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_tuple_element_100 == NULL)) {
            tmp_tuple_element_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_tuple_element_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto tuple_build_exception_27;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_211, 1, tmp_tuple_element_100);
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_assign_source_211);
        goto try_except_handler_79;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        assert(tmp_class_creation_27__bases_orig == NULL);
        tmp_class_creation_27__bases_orig = tmp_assign_source_211;
    }
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_dircall_arg1_26;
        CHECK_OBJECT(tmp_class_creation_27__bases_orig);
        tmp_dircall_arg1_26 = tmp_class_creation_27__bases_orig;
        Py_INCREF(tmp_dircall_arg1_26);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_26};
            tmp_assign_source_212 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        assert(tmp_class_creation_27__bases == NULL);
        tmp_class_creation_27__bases = tmp_assign_source_212;
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_27__class_decl_dict == NULL);
        tmp_class_creation_27__class_decl_dict = tmp_assign_source_213;
    }
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_metaclass_value_26;
        nuitka_bool tmp_condition_result_101;
        int tmp_truth_name_26;
        PyObject *tmp_type_arg_51;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_bases_value_26;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_truth_name_26 = CHECK_IF_TRUE(tmp_class_creation_27__bases);
        if (tmp_truth_name_26 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        tmp_condition_result_101 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_101 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_26;
        } else {
            goto condexpr_false_26;
        }
        condexpr_true_26:;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_expression_value_151 = tmp_class_creation_27__bases;
        tmp_subscript_value_26 = mod_consts[14];
        tmp_type_arg_51 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_151, tmp_subscript_value_26, 0);
        if (tmp_type_arg_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        tmp_metaclass_value_26 = BUILTIN_TYPE1(tmp_type_arg_51);
        Py_DECREF(tmp_type_arg_51);
        if (tmp_metaclass_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        goto condexpr_end_26;
        condexpr_false_26:;
        tmp_metaclass_value_26 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_26);
        condexpr_end_26:;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_bases_value_26 = tmp_class_creation_27__bases;
        tmp_assign_source_214 = SELECT_METACLASS(tstate, tmp_metaclass_value_26, tmp_bases_value_26);
        Py_DECREF(tmp_metaclass_value_26);
        if (tmp_assign_source_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        assert(tmp_class_creation_27__metaclass == NULL);
        tmp_class_creation_27__metaclass = tmp_assign_source_214;
    }
    {
        bool tmp_condition_result_102;
        PyObject *tmp_expression_value_152;
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_152 = tmp_class_creation_27__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_152, mod_consts[23]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        tmp_condition_result_102 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_102 != false) {
            goto branch_yes_76;
        } else {
            goto branch_no_76;
        }
    }
    branch_yes_76:;
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_args_value_52;
        PyObject *tmp_tuple_element_101;
        PyObject *tmp_kwargs_value_52;
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_153 = tmp_class_creation_27__metaclass;
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[23]);
        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        tmp_tuple_element_101 = mod_consts[362];
        tmp_args_value_52 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_52, 0, tmp_tuple_element_101);
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_tuple_element_101 = tmp_class_creation_27__bases;
        PyTuple_SET_ITEM0(tmp_args_value_52, 1, tmp_tuple_element_101);
        CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
        tmp_kwargs_value_52 = tmp_class_creation_27__class_decl_dict;
        frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1475;
        tmp_assign_source_215 = CALL_FUNCTION(tstate, tmp_called_value_82, tmp_args_value_52, tmp_kwargs_value_52);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_value_52);
        if (tmp_assign_source_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        assert(tmp_class_creation_27__prepared == NULL);
        tmp_class_creation_27__prepared = tmp_assign_source_215;
    }
    {
        bool tmp_condition_result_103;
        PyObject *tmp_operand_value_26;
        PyObject *tmp_expression_value_154;
        CHECK_OBJECT(tmp_class_creation_27__prepared);
        tmp_expression_value_154 = tmp_class_creation_27__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_154, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        tmp_operand_value_26 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_26);
        assert(!(tmp_res == -1));
        tmp_condition_result_103 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_103 != false) {
            goto branch_yes_77;
        } else {
            goto branch_no_77;
        }
    }
    branch_yes_77:;
    {
        PyObject *tmp_raise_type_26;
        PyObject *tmp_raise_value_26;
        PyObject *tmp_mod_expr_left_26;
        PyObject *tmp_mod_expr_right_26;
        PyObject *tmp_tuple_element_102;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_name_value_29;
        PyObject *tmp_default_value_26;
        tmp_raise_type_26 = PyExc_TypeError;
        tmp_mod_expr_left_26 = mod_consts[26];
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_155 = tmp_class_creation_27__metaclass;
        tmp_name_value_29 = mod_consts[2];
        tmp_default_value_26 = mod_consts[27];
        tmp_tuple_element_102 = BUILTIN_GETATTR(tstate, tmp_expression_value_155, tmp_name_value_29, tmp_default_value_26);
        if (tmp_tuple_element_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        tmp_mod_expr_right_26 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_156;
            PyObject *tmp_type_arg_52;
            PyTuple_SET_ITEM(tmp_mod_expr_right_26, 0, tmp_tuple_element_102);
            CHECK_OBJECT(tmp_class_creation_27__prepared);
            tmp_type_arg_52 = tmp_class_creation_27__prepared;
            tmp_expression_value_156 = BUILTIN_TYPE1(tmp_type_arg_52);
            assert(!(tmp_expression_value_156 == NULL));
            tmp_tuple_element_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[2]);
            Py_DECREF(tmp_expression_value_156);
            if (tmp_tuple_element_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1475;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_26, 1, tmp_tuple_element_102);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_28:;
        Py_DECREF(tmp_mod_expr_right_26);
        goto try_except_handler_79;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_raise_value_26 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_26, tmp_mod_expr_right_26);
        Py_DECREF(tmp_mod_expr_right_26);
        if (tmp_raise_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_79;
        }
        exception_type = tmp_raise_type_26;
        Py_INCREF(tmp_raise_type_26);
        exception_value = tmp_raise_value_26;
        exception_lineno = 1475;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_79;
    }
    branch_no_77:;
    goto branch_end_76;
    branch_no_76:;
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_27__prepared == NULL);
        tmp_class_creation_27__prepared = tmp_assign_source_216;
    }
    branch_end_76:;
    {
        PyObject *tmp_assign_source_217;
        {
            PyObject *tmp_set_locals_27;
            CHECK_OBJECT(tmp_class_creation_27__prepared);
            tmp_set_locals_27 = tmp_class_creation_27__prepared;
            locals_zope$interface$interfaces$$$class__27_IComponents_1475 = tmp_set_locals_27;
            Py_INCREF(tmp_set_locals_27);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__27_IComponents_1475, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_81;
        }
        tmp_dictset_value = mod_consts[363];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__27_IComponents_1475, mod_consts[4], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_81;
        }
        tmp_dictset_value = mod_consts[362];
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__27_IComponents_1475, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_81;
        }
        {
            nuitka_bool tmp_condition_result_104;
            PyObject *tmp_cmp_expr_left_26;
            PyObject *tmp_cmp_expr_right_26;
            CHECK_OBJECT(tmp_class_creation_27__bases);
            tmp_cmp_expr_left_26 = tmp_class_creation_27__bases;
            CHECK_OBJECT(tmp_class_creation_27__bases_orig);
            tmp_cmp_expr_right_26 = tmp_class_creation_27__bases_orig;
            tmp_condition_result_104 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
            if (tmp_condition_result_104 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1475;

                goto try_except_handler_81;
            }
            if (tmp_condition_result_104 == NUITKA_BOOL_TRUE) {
                goto branch_yes_78;
            } else {
                goto branch_no_78;
            }
        }
        branch_yes_78:;
        CHECK_OBJECT(tmp_class_creation_27__bases_orig);
        tmp_dictset_value = tmp_class_creation_27__bases_orig;
        tmp_res = PyObject_SetItem(locals_zope$interface$interfaces$$$class__27_IComponents_1475, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto try_except_handler_81;
        }
        branch_no_78:;
        {
            PyObject *tmp_assign_source_218;
            PyObject *tmp_called_value_83;
            PyObject *tmp_args_value_53;
            PyObject *tmp_tuple_element_103;
            PyObject *tmp_kwargs_value_53;
            CHECK_OBJECT(tmp_class_creation_27__metaclass);
            tmp_called_value_83 = tmp_class_creation_27__metaclass;
            tmp_tuple_element_103 = mod_consts[362];
            tmp_args_value_53 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_53, 0, tmp_tuple_element_103);
            CHECK_OBJECT(tmp_class_creation_27__bases);
            tmp_tuple_element_103 = tmp_class_creation_27__bases;
            PyTuple_SET_ITEM0(tmp_args_value_53, 1, tmp_tuple_element_103);
            tmp_tuple_element_103 = locals_zope$interface$interfaces$$$class__27_IComponents_1475;
            PyTuple_SET_ITEM0(tmp_args_value_53, 2, tmp_tuple_element_103);
            CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
            tmp_kwargs_value_53 = tmp_class_creation_27__class_decl_dict;
            frame_49517bcfc160cc63b029c7fab051cf23->m_frame.f_lineno = 1475;
            tmp_assign_source_218 = CALL_FUNCTION(tstate, tmp_called_value_83, tmp_args_value_53, tmp_kwargs_value_53);
            Py_DECREF(tmp_args_value_53);
            if (tmp_assign_source_218 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1475;

                goto try_except_handler_81;
            }
            assert(outline_26_var___class__ == NULL);
            outline_26_var___class__ = tmp_assign_source_218;
        }
        CHECK_OBJECT(outline_26_var___class__);
        tmp_assign_source_217 = outline_26_var___class__;
        Py_INCREF(tmp_assign_source_217);
        goto try_return_handler_81;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_81:;
        Py_DECREF(locals_zope$interface$interfaces$$$class__27_IComponents_1475);
        locals_zope$interface$interfaces$$$class__27_IComponents_1475 = NULL;
        goto try_return_handler_80;
        // Exception handler code:
        try_except_handler_81:;
        exception_keeper_type_79 = exception_type;
        exception_keeper_value_79 = exception_value;
        exception_keeper_tb_79 = exception_tb;
        exception_keeper_lineno_79 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_zope$interface$interfaces$$$class__27_IComponents_1475);
        locals_zope$interface$interfaces$$$class__27_IComponents_1475 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_79;
        exception_value = exception_keeper_value_79;
        exception_tb = exception_keeper_tb_79;
        exception_lineno = exception_keeper_lineno_79;

        goto try_except_handler_80;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_80:;
        CHECK_OBJECT(outline_26_var___class__);
        Py_DECREF(outline_26_var___class__);
        outline_26_var___class__ = NULL;
        goto outline_result_27;
        // Exception handler code:
        try_except_handler_80:;
        exception_keeper_type_80 = exception_type;
        exception_keeper_value_80 = exception_value;
        exception_keeper_tb_80 = exception_tb;
        exception_keeper_lineno_80 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_80;
        exception_value = exception_keeper_value_80;
        exception_tb = exception_keeper_tb_80;
        exception_lineno = exception_keeper_lineno_80;

        goto outline_exception_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_27:;
        exception_lineno = 1475;
        goto try_except_handler_79;
        outline_result_27:;
        UPDATE_STRING_DICT1(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_217);
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_79:;
    exception_keeper_type_81 = exception_type;
    exception_keeper_value_81 = exception_value;
    exception_keeper_tb_81 = exception_tb;
    exception_keeper_lineno_81 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_27__bases_orig);
    tmp_class_creation_27__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_27__bases);
    tmp_class_creation_27__bases = NULL;
    Py_XDECREF(tmp_class_creation_27__class_decl_dict);
    tmp_class_creation_27__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_27__metaclass);
    tmp_class_creation_27__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_27__prepared);
    tmp_class_creation_27__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_81;
    exception_value = exception_keeper_value_81;
    exception_tb = exception_keeper_tb_81;
    exception_lineno = exception_keeper_lineno_81;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_17;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_49517bcfc160cc63b029c7fab051cf23, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49517bcfc160cc63b029c7fab051cf23->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49517bcfc160cc63b029c7fab051cf23, exception_lineno);
    }



    assertFrameObject(frame_49517bcfc160cc63b029c7fab051cf23);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_17:;
    CHECK_OBJECT(tmp_class_creation_27__bases_orig);
    Py_DECREF(tmp_class_creation_27__bases_orig);
    tmp_class_creation_27__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_27__bases);
    Py_DECREF(tmp_class_creation_27__bases);
    tmp_class_creation_27__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
    Py_DECREF(tmp_class_creation_27__class_decl_dict);
    tmp_class_creation_27__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_27__metaclass);
    Py_DECREF(tmp_class_creation_27__metaclass);
    tmp_class_creation_27__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_27__prepared);
    Py_DECREF(tmp_class_creation_27__prepared);
    tmp_class_creation_27__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("zope$interface$interfaces", false);

    Py_INCREF(module_zope$interface$interfaces);
    return module_zope$interface$interfaces;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_zope$interface$interfaces, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("zope$interface$interfaces", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
