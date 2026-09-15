// kickboxing - main.c gerado por V12
#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"

PSP_MODULE_INFO("kickboxing", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// Tipos J2ME (todos como void*)
typedef void* Image;
typedef void* Graphics;
typedef void* DirectGraphics;
typedef void* Font;
typedef void* String;
typedef void* StringBuffer;
typedef void* Command;
typedef void* Display;
typedef void* Displayable;
typedef void* Canvas;
typedef void* FullCanvas;
typedef void* GameCanvas;
typedef void* Random;
typedef void* Timer;
typedef void* TimerTask;
typedef void* Vector;
typedef void* List;
typedef void* Form;
typedef void* TextField;
typedef void* InputStream;
typedef void* DataInputStream;
typedef void* OutputStream;
typedef void* RecordStore;
typedef void* Thread;
typedef void* MIDlet;
typedef void* Object;
typedef void* Class;
typedef void* Math;
typedef void* System;
typedef void* Integer;
typedef void* Long;
typedef void* Short;
typedef void* Byte;
typedef void* Character;
typedef void* Boolean;
typedef void* Float;
typedef void* Double;
typedef void* Sound;
typedef void* DeviceControl;
typedef void* SpriteEvent;
typedef void* SpriteListener;
typedef void* SpriteAction;
typedef void* MIDP;
typedef void* SoundListener;
typedef void* Player;
typedef void* PlayerListener;
typedef void* Control;
typedef void* Manager;
typedef void* DataInputStream2;
typedef void* ByteArrayInputStream;
typedef void* ByteArrayOutputStream;

// Stubs de biblioteca
void j2me_canvas_repaint(void) { }
void j2me_canvas_serviceRepaints(void) { }
void j2me_gc(void) { }
void* j2me_image_get_graphics(void* img) { return img; }

// Forward typedefs das classes do projeto
typedef struct KickBoxing_s KickBoxing;
typedef struct a_s a;
typedef struct b_s b;
typedef struct c_s c;
typedef struct d_s d;
typedef struct e_s e;
typedef struct f_s f;
typedef struct g_s g;
typedef struct h_a_s h_a;
typedef struct h_s h;
typedef struct i_s i;
typedef struct j_s j;
typedef struct k_s k;

// Globais
void* _self = 0;
void* _p1_self = 0;
void* _p2_self = 0;
void* _role_self = 0;
c* msf_mc = 0;
int Game_count = 0;
int MapCanvas_OFFY = 96;
int MapCanvas_OFFX = 180;
int MapCanvas_CanvasWidth = 480;
int MapCanvas_CanvasHeight = 272;
int MapCanvas_still = 0;
int MapCanvas_lightflag = 0;

// Structs
struct KickBoxing_s {
    Display*     int_x;
    h* do_x;
    Form*        for_x;
    TextField*   if_x;
    Command*     a;
};

struct a_s {
    int          for_x;
    int          do_x;
    int          a;
    int          int_x;
    a*           if_x;
};

struct b_s {
    g*           f;
    int          goto_x;
    int          try;
    int          case_x;
    int          do_x;
    int          if_x;
    int          a;
    int          b;
    int          i;
    int          g;
    int          new;
    int          int_x;
    int          for_x;
    int          char_x;
    int          c;
    int          else_x;
    int          h;
    int          void_x;
    int          e;
    int          d;
    int          byte;
    int          null;
    int          long_x;
};

struct c_s {
    g*           f;
    int          k;
    int          j;
};

struct d_s {
    Random*      a;
};

struct e_s {
    g*           a;
};

struct f_s {
    g*           f;
    int          l;
};

struct g_s {
    h* for_x;
    int          e;
    int          try;
    int          long_x;
    f*           b;
    c*           do_x;
    int          goto_x;
    int          new;
    int          null;
    int          else_x;
    int          case_x;
    int          byte;
    int          char_x;
    int*         c;
    int*         d;
    int*         if_x;
    String**     void_x;
    int          a;
    e*           int_x;
    String*      f;
};

typedef struct h_a_cls_s h_a_cls;
typedef struct h_a_cls_s h_a_cls_s;

struct h_a_s {
    Thread*      if_x;
    h* a;
    h* this_0;
};

struct h_s {
    int          p;
    DeviceControl* b;
    int          for_x;
    int          try;
    int          v;
    int          char_x;
    int          l;
    int          do_x;
    int          case_x;
    int          r;
    int          new;
    int          m;
    Image*       w;
    int          byte;
    int          j;
    int          g;
    int          k;
    int          h;
    int          i;
    int          q;
    int          C;
    int          A;
    g*           else_x;
    Thread*      x;
    int          goto_x;
    j*           null;
    String*      int_x;
    int          z;
    String**     u;
    int*         s;
    int*         t;
    k*           long_x;
    Image*       a;
    Image*       o;
    Image**      c;
    a***         f;
    int          D;
    KickBoxing*  y;
    int          e;
    String**     d;
    String**     if_x;
    h_a_cls*         n;
    int          B;
    int          void_x;
};

struct i_s {
    int          a;
    int          if_x;
};

struct j_s {
    h* do_x;
    String*      for_x;
    String**     if_x;
    RecordStore* int_x;
    String*      else_x;
    int          void_x;
    signed char* char_x;
    signed char* long_x;
    int          null;
    int          try;
    int          goto_x;
    int          new;
    int          a;
    int          case_x;
    String*      byte;
};

struct k_s {
    Sound*       if_x;
    Sound*       for_x;
    Sound*       a;
    Sound*       do_x;
};

// Prototipos
void KickBoxing_constructor(void* self);
void KickBoxing_if_x(void* self);
void KickBoxing_startApp(void* self);
void KickBoxing_pauseApp(void* self);
void KickBoxing_destroyApp(void* self, int arg0);
void KickBoxing_commandAction(void* self, void* arg0, void* arg1);
void KickBoxing_do_x(void* self);
void KickBoxing_a(void* self);
void a_constructor(void* self, int arg0, int arg1, int arg2, int arg3);
int a_a_fn(void* self, void* arg0, int arg1);
void b_constructor(void* self, void* arg0, int arg1, int arg2);
void b_a(void* self, void* arg0);
void b_for_x(void* self, void* arg0, void* arg1);
void b_try(void* self, void* arg0, void* arg1);
void b_case_x(void* self, void* arg0, void* arg1);
void b_do_x(void* self, void* arg0, void* arg1);
void b_a_2(void* self, void* arg0, void* arg1);
void b_a_3(void* self, int arg0, int arg1, int arg2);
void b_a_4(void* self, int arg0, int arg1, int arg2);
void b_new(void* self, void* arg0, void* arg1);
void b_if_x(void* self, void* arg0, void* arg1);
void b_byte(void* self, void* arg0, void* arg1);
void b_int_x(void* self, void* arg0, void* arg1);
void c_constructor(void* self, void* arg0, int arg1);
void c_a(void* self, int arg0);
void c_if_x(void* self, int arg0);
int c_a_2(void* self);
void c_if_x_2(void* self);
void d_constructor(void* self);
int d_a(void* self, int arg0);
int d_a_2(void* self, int arg0, int arg1);
void e_constructor(void* self, void* arg0);
void e_a(void* self);
void e_do_x(void* self);
void e_if_x(void* self);
void f_constructor(void* self, void* arg0, int arg1);
void f_for_x(void* self);
void f_do_x(void* self);
void g_constructor(void* self, void* arg0);
void g_if_x(void* self);
void g_do_x(void* self);
void g_new(void* self);
void g_do_x_2(void* self, void* arg0);
void g_byte(void* self);
void g_a(void* self);
void g_try(void* self);
void g_for_x(void* self);
void g_int_x(void* self);
void g_case_x(void* self);
void g_int_x_2(void* self, void* arg0);
void g_if_x_2(void* self, void* arg0);
void g_a_2(void* self, void* arg0);
void g_for_x_2(void* self, void* arg0);
void g_new_2(void* self, void* arg0);
void h_a_constructor(void* self, void* arg0, void* arg1);
void h_a_run(void* self);
void h_constructor(void* self, void* arg0);
void h_do_x(void* self);
void h_a_fn(void* self);
void h_if_x(void* self);
void h_for_x(void* self);
void h_run(void* self);
void h_goto_x(void* self, void* arg0);
void h_for_x_2(void* self, void* arg0);
void h_char_x(void* self, void* arg0);
void h_hideNotify(void* self);
void h_case_x(void* self, void* arg0);
void h_new(void* self, void* arg0);
void h_int_x(void* self, void* arg0);
void h_a_2(void* self, void* arg0);
void h_byte(void* self, void* arg0);
void h_do_x_2(void* self, void* arg0);
void h_a_3(void* self, void* arg0, int arg1);
void h_else_x(void* self, void* arg0);
void h_if_x_2(void* self, void* arg0);
void h_try(void* self, void* arg0);
void h_paint(void* self, void* arg0);
void h_keyPressed(void* self, int arg0);
void h_keyRepeated(void* self, int arg0);
void h_keyReleased(void* self, int arg0);
void h_access_000(void* self, void* arg0);
void* h_access_102(void* self, void* arg0, void* arg1);
void* h_access_100(void* self, void* arg0);
void i_constructor(void* self, int arg0, int arg1);
void j_constructor(void* self, void* arg0);
void j_a(void* self);
int j_if_x(void* self, int arg0);
void j_a_2(void* self, int arg0);
void j_for_x(void* self);
void j_if_x_2(void* self);
void j_do_x(void* self, int arg0);
void j_do_x_2(void* self);
void k_constructor(void* self, void* arg0);
void* k_a(void* self, void* arg0, void* arg1, void* arg2);
void k_if_x(void* self);
void k_a_2(void* self);
void k_for_x(void* self);
void k_int_x(void* self);
void k_do_x(void* self);
void k_new(void* self);
void k_a_3(void* self, void* arg0);

// Implementacoes
void KickBoxing_constructor(void* self) {
    KickBoxing* s = (KickBoxing*)self;
    if (!s) return;
    (void)s;
}

void KickBoxing_if_x(void* self) {
    KickBoxing* s = (KickBoxing*)self;
    if (!s) return;
    (void)s;
}

void KickBoxing_startApp(void* self) {
    KickBoxing* s = (KickBoxing*)self;
    if (!s) return;
    (void)s;
}

void KickBoxing_pauseApp(void* self) {
    KickBoxing* s = (KickBoxing*)self;
    if (!s) return;
    (void)s;
}

void KickBoxing_destroyApp(void* self, int arg0) {
    KickBoxing* s = (KickBoxing*)self;
    if (!s) return;
    (void)s;
}

void KickBoxing_commandAction(void* self, void* arg0, void* arg1) {
    KickBoxing* s = (KickBoxing*)self;
    if (!s) return;
    (void)s;
}

void KickBoxing_do_x(void* self) {
    KickBoxing* s = (KickBoxing*)self;
    if (!s) return;
    (void)s;
}

void KickBoxing_a(void* self) {
    KickBoxing* s = (KickBoxing*)self;
    if (!s) return;
    (void)s;
}

void a_constructor(void* self, int arg0, int arg1, int arg2, int arg3) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

int a_a_fn(void* self, void* arg0, int arg1) {
    a* s = (a*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void b_constructor(void* self, void* arg0, int arg1, int arg2) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_a(void* self, void* arg0) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_for_x(void* self, void* arg0, void* arg1) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_try(void* self, void* arg0, void* arg1) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_case_x(void* self, void* arg0, void* arg1) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_do_x(void* self, void* arg0, void* arg1) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_a_2(void* self, void* arg0, void* arg1) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_a_3(void* self, int arg0, int arg1, int arg2) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_a_4(void* self, int arg0, int arg1, int arg2) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_new(void* self, void* arg0, void* arg1) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_if_x(void* self, void* arg0, void* arg1) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_byte(void* self, void* arg0, void* arg1) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_int_x(void* self, void* arg0, void* arg1) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void c_constructor(void* self, void* arg0, int arg1) {
    c* s = (c*)self;
    if (!s) return;
    (void)s;
}

void c_a(void* self, int arg0) {
    c* s = (c*)self;
    if (!s) return;
    (void)s;
}

void c_if_x(void* self, int arg0) {
    c* s = (c*)self;
    if (!s) return;
    (void)s;
}

int c_a_2(void* self) {
    c* s = (c*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void c_if_x_2(void* self) {
    c* s = (c*)self;
    if (!s) return;
    (void)s;
}

void d_constructor(void* self) {
    d* s = (d*)self;
    if (!s) return;
    (void)s;
}

int d_a(void* self, int arg0) {
    d* s = (d*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int d_a_2(void* self, int arg0, int arg1) {
    d* s = (d*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void e_constructor(void* self, void* arg0) {
    e* s = (e*)self;
    if (!s) return;
    (void)s;
}

void e_a(void* self) {
    e* s = (e*)self;
    if (!s) return;
    (void)s;
}

void e_do_x(void* self) {
    e* s = (e*)self;
    if (!s) return;
    (void)s;
}

void e_if_x(void* self) {
    e* s = (e*)self;
    if (!s) return;
    (void)s;
}

void f_constructor(void* self, void* arg0, int arg1) {
    f* s = (f*)self;
    if (!s) return;
    (void)s;
}

void f_for_x(void* self) {
    f* s = (f*)self;
    if (!s) return;
    (void)s;
}

void f_do_x(void* self) {
    f* s = (f*)self;
    if (!s) return;
    (void)s;
}

void g_constructor(void* self, void* arg0) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_if_x(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_do_x(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_new(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_do_x_2(void* self, void* arg0) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_byte(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_a(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_try(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_for_x(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_int_x(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_case_x(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_int_x_2(void* self, void* arg0) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_if_x_2(void* self, void* arg0) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_a_2(void* self, void* arg0) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_for_x_2(void* self, void* arg0) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_new_2(void* self, void* arg0) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void h_a_constructor(void* self, void* arg0, void* arg1) {
    h_a* s = (h_a*)self;
    if (!s) return;
    (void)s;
}

void h_a_run(void* self) {
    h_a* s = (h_a*)self;
    if (!s) return;
    (void)s;
}

void h_constructor(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_do_x(void* self) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_a_fn(void* self) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_if_x(void* self) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_for_x(void* self) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_run(void* self) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_goto_x(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_for_x_2(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_char_x(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_hideNotify(void* self) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_case_x(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_new(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_int_x(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_a_2(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_byte(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_do_x_2(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_a_3(void* self, void* arg0, int arg1) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_else_x(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_if_x_2(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_try(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_paint(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_keyPressed(void* self, int arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_keyRepeated(void* self, int arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_keyReleased(void* self, int arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_access_000(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void* h_access_102(void* self, void* arg0, void* arg1) {
    h* s = (h*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* h_access_100(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void i_constructor(void* self, int arg0, int arg1) {
    i* s = (i*)self;
    if (!s) return;
    (void)s;
}

void j_constructor(void* self, void* arg0) {
    j* s = (j*)self;
    if (!s) return;
    (void)s;
}

void j_a(void* self) {
    j* s = (j*)self;
    if (!s) return;
    (void)s;
}

int j_if_x(void* self, int arg0) {
    j* s = (j*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void j_a_2(void* self, int arg0) {
    j* s = (j*)self;
    if (!s) return;
    (void)s;
}

void j_for_x(void* self) {
    j* s = (j*)self;
    if (!s) return;
    (void)s;
}

void j_if_x_2(void* self) {
    j* s = (j*)self;
    if (!s) return;
    (void)s;
}

void j_do_x(void* self, int arg0) {
    j* s = (j*)self;
    if (!s) return;
    (void)s;
}

void j_do_x_2(void* self) {
    j* s = (j*)self;
    if (!s) return;
    (void)s;
}

void k_constructor(void* self, void* arg0) {
    k* s = (k*)self;
    if (!s) return;
    (void)s;
}

void* k_a(void* self, void* arg0, void* arg1, void* arg2) {
    k* s = (k*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void k_if_x(void* self) {
    k* s = (k*)self;
    if (!s) return;
    (void)s;
}

void k_a_2(void* self) {
    k* s = (k*)self;
    if (!s) return;
    (void)s;
}

void k_for_x(void* self) {
    k* s = (k*)self;
    if (!s) return;
    (void)s;
}

void k_int_x(void* self) {
    k* s = (k*)self;
    if (!s) return;
    (void)s;
}

void k_do_x(void* self) {
    k* s = (k*)self;
    if (!s) return;
    (void)s;
}

void k_new(void* self) {
    k* s = (k*)self;
    if (!s) return;
    (void)s;
}

void k_a_3(void* self, void* arg0) {
    k* s = (k*)self;
    if (!s) return;
    (void)s;
}

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    c* mc = (c*)calloc(1, sizeof(c));
    _self = mc;
    msf_mc = mc;

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;
        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);
        j2me_gfx_flip();
    }
    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}