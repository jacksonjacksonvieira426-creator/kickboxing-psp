// kickboxing - Port automatico J2ME -> PSP
// Gerado por portador.py
// MIDlet: KickBoxing  Canvas: c

#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"
#include <stdint.h>

// ============================================
// TIPOS J2ME -> ponteiros opacos em C
// ============================================
typedef void* Image;
typedef void* Graphics;
typedef void* Font;
typedef void* String;
typedef void* Command;
typedef void* Display;
typedef void* Displayable;
typedef void* MIDlet;
typedef void* Canvas;

PSP_MODULE_INFO("kickboxing", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// ============================================
// FORWARD DECLARATIONS das classes do projeto
// ============================================
typedef struct KickBoxing_s KickBoxing;
typedef struct a_s a;
typedef struct b_s b;
typedef struct c_s c;
typedef struct d_s d;
typedef struct e_s e;
typedef struct f_s f;
typedef struct g_s g;
typedef struct ofusc_00ed_s ofusc_00ed;
typedef struct h_s h;
typedef struct i_s i;
typedef struct j_s j;
typedef struct k_s k;

// ============================================
// ESTRUTURAS DE DADOS (traduzidas do J2ME)
// ============================================

// === Classe: KickBoxing (extends MIDlet) ===
// Padroes detectados: MIDLET, TEM_STARTAPP
struct KickBoxing_s {
    Display*        int;  // int (Ljavax/microedition/lcdui/Display;)
    h*              do;  // do (Lh;)
    Form*           for;  // for (Ljavax/microedition/lcdui/Form;)
    TextField*      if;  // if (Ljavax/microedition/lcdui/TextField;)
    Command*        a;  // a (Ljavax/microedition/lcdui/Command;)
};

// === Classe: a (extends Object) ===
// Padroes detectados: nenhum
struct a_s {
    int             for;  // for (I)
    int             do;  // do (I)
    int             a;  // a (I)
    int             int;  // int (I)
    a*              if;  // if (La;)
};

// === Classe: b (extends Object) ===
// Padroes detectados: USA_IMAGE
struct b_s {
    g*              f;  // f (Lg;)
    int             goto;  // goto (I)
    int             try;  // try (I)
    int             case;  // case (I)
    int             do;  // do (I)
    int             if;  // if (I)
    int             a;  // a (I)
    int             b;  // b (I)
    int             i;  // i (I)
    int             g;  // g (I)
    int             new;  // new (Z)
    int             int;  // int (Z)
    int             for;  // for (Z)
    int             char;  // char (I)
    int             c;  // c (Z)
    int             else;  // else (I)
    int             h;  // h (I)
    int             void;  // void (I)
    int             e;  // e (I)
    int             d;  // d (I)
    int             byte;  // byte (I)
    int             null;  // null (I)
    int             long;  // long (Z)
};

// === Classe: c (extends Canvas) ===
// Padroes detectados: CANVAS, USA_IMAGE
struct c_s {
    g*              f;  // f (Lg;)
    int             k;  // k (I)
    int             j;  // j (I)
};

// === Classe: d (extends Object) ===
// Padroes detectados: nenhum
struct d_s {
    Random*         a;  // a (Ljava/util/Random;)
};

// === Classe: e (extends Object) ===
// Padroes detectados: nenhum
struct e_s {
    g*              a;  // a (Lg;)
};

// === Classe: f (extends Object) ===
// Padroes detectados: USA_IMAGE
struct f_s {
    g*              f;  // f (Lg;)
    int             l;  // l (I)
};

// === Classe: g (extends Object) ===
// Padroes detectados: USA_IMAGE
struct g_s {
    h*              for;  // for (Lh;)
    int             e;  // e (I)
    int             try;  // try (I)
    int             long;  // long (I)
    f*              b;  // b (Lf;)
    c*              do;  // do (Lc;)
    int             goto;  // goto (Z)
    int             new;  // new (I)
    int             null;  // null (I)
    int             else;  // else (Z)
    int             case;  // case (I)
    int             byte;  // byte (I)
    int             char;  // char (I)
    int*            c;  // c ([I)
    int*            d;  // d ([I)
    int*            if;  // if ([I)
    String**        void;  // void ([Ljava/lang/String;)
    int             a;  // a (I)
    e*              int;  // int (Le;)
    String*         f;  // f (Ljava/lang/String;)
};

// === Classe: h$a (extends Object) ===
// Padroes detectados: TEM_RUN
struct ofusc_00ed_s {
    Thread*         if;  // if (Ljava/lang/Thread;)
    h*              a;  // a (Lh;)
    h*              ofusc_020c;  // this$0 (Lh;)
};

// === Classe: h (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, TEM_INPUT, TEM_RUN, USA_IMAGE
struct h_s {
    int             p;  // p (I)
    DeviceControl*  b;  // b (Lcom/nokia/mid/ui/DeviceControl;)
    int             for;  // for (I)
    int             try;  // try (I)
    int             v;  // v (I)
    int             char;  // char (I)
    int             l;  // l (I)
    int             do;  // do (I)
    int             case;  // case (I)
    int             r;  // r (I)
    int             new;  // new (I)
    int             m;  // m (I)
    Image*          w;  // w (Ljavax/microedition/lcdui/Image;)
    int             byte;  // byte (Z)
    int             j;  // j (I)
    int             g;  // g (I)
    int             k;  // k (I)
    int             h;  // h (Z)
    int             i;  // i (Z)
    int             q;  // q (I)
    int             C;  // C (I)
    int             A;  // A (I)
    g*              else;  // else (Lg;)
    Thread*         x;  // x (Ljava/lang/Thread;)
    int             goto;  // goto (I)
    j*              null;  // null (Lj;)
    String*         int;  // int (Ljava/lang/String;)
    int             z;  // z (I)
    String**        u;  // u ([Ljava/lang/String;)
    int*            s;  // s ([I)
    int*            t;  // t ([I)
    k*              long;  // long (Lk;)
    Image*          a;  // a (Ljavax/microedition/lcdui/Image;)
    Image*          o;  // o (Ljavax/microedition/lcdui/Image;)
    Image**         c;  // c ([Ljavax/microedition/lcdui/Image;)
    a***            f;  // f ([[La;)
    int             D;  // D (I)
    KickBoxing*     y;  // y (LKickBoxing;)
    int             e;  // e (Z)
    String**        d;  // d ([Ljava/lang/String;)
    String**        if;  // if ([Ljava/lang/String;)
    h$a*            n;  // n (Lh$a;)
    int             B;  // B (I)
    int             void;  // void (I)
};

// === Classe: i (extends Object) ===
// Padroes detectados: nenhum
struct i_s {
    int             a;  // a (I)
    int             if;  // if (I)
};

// === Classe: j (extends Object) ===
// Padroes detectados: nenhum
struct j_s {
    h*              do;  // do (Lh;)
    String*         for;  // for (Ljava/lang/String;)
    String**        if;  // if ([Ljava/lang/String;)
    RecordStore*    int;  // int (Ljavax/microedition/rms/RecordStore;)
    String*         else;  // else (Ljava/lang/String;)
    int             void;  // void (I)
    signed char*    char;  // char ([B)
    signed char*    long;  // long ([B)
    int             null;  // null (I)
    int             try;  // try (I)
    int             goto;  // goto (I)
    int             new;  // new (I)
    int             a;  // a (I)
    int             case;  // case (I)
    String*         byte;  // byte (Ljava/lang/String;)
};

// === Classe: k (extends MIDlet) ===
// Padroes detectados: MIDLET
struct k_s {
    Sound*          if;  // if (Lcom/nokia/mid/sound/Sound;)
    Sound*          for;  // for (Lcom/nokia/mid/sound/Sound;)
    Sound*          a;  // a (Lcom/nokia/mid/sound/Sound;)
    Sound*          do;  // do (Lcom/nokia/mid/sound/Sound;)
};

// ============================================
// METODOS (traduzidos do bytecode)
// ============================================

// === KickBoxing.KickBoxing_constructor (()V) ===
// Instrucoes: 13
// APIs usadas:
//   1x javax/microedition/midlet/MIDlet.<init> -> ??? javax/microedition/midlet/MIDlet.<init>
//   1x javax/microedition/lcdui/Display.getDisplay -> j2me_display_get
void KickBoxing_constructor() {
    // TODO: traduzir logica do bytecode
}

// === KickBoxing.KickBoxing_if (()V) ===
// Instrucoes: 6
// APIs usadas:
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void KickBoxing_if() {
    // TODO: traduzir logica do bytecode
}

// === KickBoxing.KickBoxing_startApp (()V) ===
// Instrucoes: 3
void KickBoxing_startApp() {
    // TODO: traduzir logica do bytecode
}

// === KickBoxing.KickBoxing_pauseApp (()V) ===
// Instrucoes: 1
void KickBoxing_pauseApp() {
    // TODO: traduzir logica do bytecode
}

// === KickBoxing.KickBoxing_destroyApp ((Z)V) ===
// Instrucoes: 6
// APIs usadas:
//   1x java/lang/System.gc -> ??? java/lang/System.gc
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void KickBoxing_destroyApp() {
    // TODO: traduzir logica do bytecode
}

// === KickBoxing.KickBoxing_commandAction ((Ljavax/microedition/lcdui/Command;Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 36
// APIs usadas:
//   1x javax/microedition/lcdui/Command.getCommandType -> ??? javax/microedition/lcdui/Command.getCommandType
//   1x javax/microedition/lcdui/TextField.getString -> ??? javax/microedition/lcdui/TextField.getString
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
//   1x java/lang/System.gc -> ??? java/lang/System.gc
void KickBoxing_commandAction() {
    // TODO: traduzir logica do bytecode
}

// === KickBoxing.KickBoxing_do (()V) ===
// Instrucoes: 49
// APIs usadas:
//   2x javax/microedition/lcdui/Form.append -> ??? javax/microedition/lcdui/Form.append
//   1x javax/microedition/lcdui/Form.<init> -> ??? javax/microedition/lcdui/Form.<init>
//   1x javax/microedition/lcdui/TextField.<init> -> ??? javax/microedition/lcdui/TextField.<init>
//   1x javax/microedition/lcdui/Command.<init> -> ??? javax/microedition/lcdui/Command.<init>
//   1x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void KickBoxing_do() {
    // TODO: traduzir logica do bytecode
}

// === KickBoxing.KickBoxing_a (()V) ===
// Instrucoes: 6
// APIs usadas:
//   1x javax/microedition/midlet/MIDlet.notifyDestroyed -> ??? javax/microedition/midlet/MIDlet.notifyDestroyed
void KickBoxing_a() {
    // TODO: traduzir logica do bytecode
}

// === a.a_constructor ((IIII)V) ===
// Instrucoes: 18
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
void a_constructor() {
    // TODO: traduzir logica do bytecode
}

// === a.a_a ((La;I)Z) ===
// Instrucoes: 209
int a_a() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === b.b_constructor ((Lg;IZ)V) ===
// Instrucoes: 97
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
void b_constructor() {
    // TODO: traduzir logica do bytecode
}

// === b.b_a ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 46
// APIs usadas:
//   1x com/nokia/mid/ui/DirectUtils.getDirectGraphics -> ??? com/nokia/mid/ui/DirectUtils.getDirectGraphics
void b_a() {
    // TODO: traduzir logica do bytecode
}

// === b.b_for ((Ljavax/microedition/lcdui/Graphics;Lcom/nokia/mid/ui/DirectGraphics;)V) ===
// Instrucoes: 97
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   1x javax/microedition/lcdui/Image.getWidth -> ??? javax/microedition/lcdui/Image.getWidth
//   1x com/nokia/mid/ui/DirectGraphics.drawImage -> ??? com/nokia/mid/ui/DirectGraphics.drawImage
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void b_for() {
    // TODO: traduzir logica do bytecode
}

// === b.b_try ((Ljavax/microedition/lcdui/Graphics;Lcom/nokia/mid/ui/DirectGraphics;)V) ===
// Instrucoes: 16
void b_try() {
    // TODO: traduzir logica do bytecode
}

// === b.b_case ((Ljavax/microedition/lcdui/Graphics;Lcom/nokia/mid/ui/DirectGraphics;)V) ===
// Instrucoes: 49
void b_case() {
    // TODO: traduzir logica do bytecode
}

// === b.b_do ((Ljavax/microedition/lcdui/Graphics;Lcom/nokia/mid/ui/DirectGraphics;)V) ===
// Instrucoes: 37
void b_do() {
    // TODO: traduzir logica do bytecode
}

// === b.b_a_2 ((Ljavax/microedition/lcdui/Graphics;Lcom/nokia/mid/ui/DirectGraphics;)V) ===
// Instrucoes: 1
void b_a_2() {
    // TODO: traduzir logica do bytecode
}

// === b.b_a_3 ((ZZZ)V) ===
// Instrucoes: 10
void b_a_3() {
    // TODO: traduzir logica do bytecode
}

// === b.b_a_4 ((IIZ)V) ===
// Instrucoes: 92
void b_a_4() {
    // TODO: traduzir logica do bytecode
}

// === b.b_new ((Ljavax/microedition/lcdui/Graphics;Lcom/nokia/mid/ui/DirectGraphics;)V) ===
// Instrucoes: 75
void b_new() {
    // TODO: traduzir logica do bytecode
}

// === b.b_if ((Ljavax/microedition/lcdui/Graphics;Lcom/nokia/mid/ui/DirectGraphics;)V) ===
// Instrucoes: 75
void b_if() {
    // TODO: traduzir logica do bytecode
}

// === b.b_byte ((Ljavax/microedition/lcdui/Graphics;Lcom/nokia/mid/ui/DirectGraphics;)V) ===
// Instrucoes: 66
void b_byte() {
    // TODO: traduzir logica do bytecode
}

// === b.b_int ((Ljavax/microedition/lcdui/Graphics;Lcom/nokia/mid/ui/DirectGraphics;)V) ===
// Instrucoes: 61
void b_int() {
    // TODO: traduzir logica do bytecode
}

// === c.c_constructor ((Lg;I)V) ===
// Instrucoes: 15
void c_constructor() {
    // TODO: traduzir logica do bytecode
}

// === c.c_a ((Z)V) ===
// Instrucoes: 96
// APIs usadas:
//   2x javax/microedition/lcdui/Image.getWidth -> ??? javax/microedition/lcdui/Image.getWidth
void c_a() {
    // TODO: traduzir logica do bytecode
}

// === c.c_if ((Z)V) ===
// Instrucoes: 81
void c_if() {
    // TODO: traduzir logica do bytecode
}

// === c.c_a_2 (()Z) ===
// Instrucoes: 68
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   1x javax/microedition/lcdui/Canvas.serviceRepaints -> ??? javax/microedition/lcdui/Canvas.serviceRepaints
int c_a_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === c.c_if_2 (()V) ===
// Instrucoes: 149
void c_if_2() {
    // TODO: traduzir logica do bytecode
}

// === d.d_constructor (()V) ===
// Instrucoes: 8
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
//   1x java/util/Random.<init> -> j2me_random_init
void d_constructor() {
    // TODO: traduzir logica do bytecode
}

// === d.d_a ((I)I) ===
// Instrucoes: 11
// APIs usadas:
//   1x java/util/Random.nextInt -> j2me_random_next
//   1x java/lang/Math.abs -> abs
int d_a() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === d.d_a_2 ((II)I) ===
// Instrucoes: 15
// APIs usadas:
//   1x java/util/Random.nextInt -> j2me_random_next
//   1x java/lang/Math.abs -> abs
int d_a_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === e.e_constructor ((Lg;)V) ===
// Instrucoes: 6
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
void e_constructor() {
    // TODO: traduzir logica do bytecode
}

// === e.e_a (()V) ===
// Instrucoes: 50
void e_a() {
    // TODO: traduzir logica do bytecode
}

// === e.e_do (()V) ===
// Instrucoes: 70
// APIs usadas:
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x java/io/PrintStream.println -> ??? java/io/PrintStream.println
void e_do() {
    // TODO: traduzir logica do bytecode
}

// === e.e_if (()V) ===
// Instrucoes: 424
// APIs usadas:
//   4x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   2x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   2x java/io/PrintStream.println -> ??? java/io/PrintStream.println
void e_if() {
    // TODO: traduzir logica do bytecode
}

// === f.f_constructor ((Lg;I)V) ===
// Instrucoes: 12
void f_constructor() {
    // TODO: traduzir logica do bytecode
}

// === f.f_for (()V) ===
// Instrucoes: 71
// APIs usadas:
//   2x javax/microedition/lcdui/Image.getWidth -> ??? javax/microedition/lcdui/Image.getWidth
void f_for() {
    // TODO: traduzir logica do bytecode
}

// === f.f_do (()V) ===
// Instrucoes: 41
void f_do() {
    // TODO: traduzir logica do bytecode
}

// === g.g_constructor ((Lh;)V) ===
// Instrucoes: 86
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
void g_constructor() {
    // TODO: traduzir logica do bytecode
}

// === g.g_if (()V) ===
// Instrucoes: 61
void g_if() {
    // TODO: traduzir logica do bytecode
}

// === g.g_do (()V) ===
// Instrucoes: 37
// APIs usadas:
//   4x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   2x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   2x java/io/PrintStream.println -> ??? java/io/PrintStream.println
void g_do() {
    // TODO: traduzir logica do bytecode
}

// === g.g_new (()V) ===
// Instrucoes: 33
void g_new() {
    // TODO: traduzir logica do bytecode
}

// === g.g_do_2 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 32
// APIs usadas:
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   1x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
void g_do_2() {
    // TODO: traduzir logica do bytecode
}

// === g.g_byte (()V) ===
// Instrucoes: 33
// APIs usadas:
//   2x javax/microedition/lcdui/Image.getWidth -> ??? javax/microedition/lcdui/Image.getWidth
void g_byte() {
    // TODO: traduzir logica do bytecode
}

// === g.g_a (()V) ===
// Instrucoes: 16
void g_a() {
    // TODO: traduzir logica do bytecode
}

// === g.g_try (()V) ===
// Instrucoes: 12
void g_try() {
    // TODO: traduzir logica do bytecode
}

// === g.g_for (()V) ===
// Instrucoes: 12
void g_for() {
    // TODO: traduzir logica do bytecode
}

// === g.g_int (()V) ===
// Instrucoes: 5
void g_int() {
    // TODO: traduzir logica do bytecode
}

// === g.g_case (()V) ===
// Instrucoes: 14
// APIs usadas:
//   1x javax/microedition/lcdui/Image.getWidth -> ??? javax/microedition/lcdui/Image.getWidth
void g_case() {
    // TODO: traduzir logica do bytecode
}

// === g.g_int_2 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 12
// APIs usadas:
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void g_int_2() {
    // TODO: traduzir logica do bytecode
}

// === g.g_if_2 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 14
// APIs usadas:
//   1x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
void g_if_2() {
    // TODO: traduzir logica do bytecode
}

// === g.g_a_2 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 127
// APIs usadas:
//   7x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   5x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   2x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
void g_a_2() {
    // TODO: traduzir logica do bytecode
}

// === g.g_for_2 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 28
// APIs usadas:
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   1x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   1x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
void g_for_2() {
    // TODO: traduzir logica do bytecode
}

// === g.g_new_2 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 94
// APIs usadas:
//   3x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   2x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   1x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   1x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
void g_new_2() {
    // TODO: traduzir logica do bytecode
}

// === h$a.h$a_constructor ((Lh;Lh;)V) ===
// Instrucoes: 18
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
//   1x java/lang/Thread.<init> -> ??? java/lang/Thread.<init>
//   1x java/lang/Thread.start -> j2me_thread_start
void h$a_constructor() {
    // TODO: traduzir logica do bytecode
}

// === h$a.h$a_run (()V) ===
// Instrucoes: 51
// APIs usadas:
//   1x java/lang/Thread.<init> -> ??? java/lang/Thread.<init>
//   1x java/lang/Thread.start -> j2me_thread_start
void h$a_run() {
    // TODO: traduzir logica do bytecode
}

// === h.h_constructor ((LKickBoxing;)V) ===
// Instrucoes: 86
// APIs usadas:
//   1x com/nokia/mid/ui/FullCanvas.<init> -> ??? com/nokia/mid/ui/FullCanvas.<init>
//   1x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
//   1x javax/microedition/lcdui/Canvas.isDoubleBuffered -> ??? javax/microedition/lcdui/Canvas.isDoubleBuffered
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
void h_constructor() {
    // TODO: traduzir logica do bytecode
}

// === h.h_do (()V) ===
// Instrucoes: 433
void h_do() {
    // TODO: traduzir logica do bytecode
}

// === h.h_a (()V) ===
// Instrucoes: 73
// APIs usadas:
//   5x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   5x javax/microedition/lcdui/Canvas.serviceRepaints -> ??? javax/microedition/lcdui/Canvas.serviceRepaints
//   2x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x java/io/PrintStream.println -> ??? java/io/PrintStream.println
void h_a() {
    // TODO: traduzir logica do bytecode
}

// === h.h_if (()V) ===
// Instrucoes: 55
// APIs usadas:
//   2x java/lang/String.<init> -> ??? java/lang/String.<init>
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x java/lang/Object.getClass -> ??? java/lang/Object.getClass
//   1x java/lang/Class.getResourceAsStream -> ??? java/lang/Class.getResourceAsStream
//   1x java/lang/String.equals -> ??? java/lang/String.equals
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x java/io/InputStream.read -> ??? java/io/InputStream.read
void h_if() {
    // TODO: traduzir logica do bytecode
}

// === h.h_for (()V) ===
// Instrucoes: 55
// APIs usadas:
//   2x java/lang/String.<init> -> ??? java/lang/String.<init>
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x java/lang/Object.getClass -> ??? java/lang/Object.getClass
//   1x java/lang/Class.getResourceAsStream -> ??? java/lang/Class.getResourceAsStream
//   1x java/lang/String.equals -> ??? java/lang/String.equals
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x java/io/InputStream.read -> ??? java/io/InputStream.read
void h_for() {
    // TODO: traduzir logica do bytecode
}

// === h.h_run (()V) ===
// Instrucoes: 56
// APIs usadas:
//   2x java/lang/System.currentTimeMillis -> j2me_time_ms
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x java/lang/Thread.currentThread -> ??? java/lang/Thread.currentThread
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   1x javax/microedition/lcdui/Canvas.serviceRepaints -> ??? javax/microedition/lcdui/Canvas.serviceRepaints
//   1x java/lang/Object.wait -> ??? java/lang/Object.wait
//   1x java/lang/Thread.yield -> ??? java/lang/Thread.yield
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
void h_run() {
    // TODO: traduzir logica do bytecode
}

// === h.h_goto ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 232
// APIs usadas:
//   11x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   10x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   3x javax/microedition/lcdui/Graphics.fillRoundRect -> ??? javax/microedition/lcdui/Graphics.fillRoundRect
//   2x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   2x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   2x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   1x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
void h_goto() {
    // TODO: traduzir logica do bytecode
}

// === h.h_for_2 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 152
// APIs usadas:
//   5x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   5x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   4x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   2x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   2x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   2x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   2x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void h_for_2() {
    // TODO: traduzir logica do bytecode
}

// === h.h_char ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 166
// APIs usadas:
//   7x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   5x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   4x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   2x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   2x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   2x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   2x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void h_char() {
    // TODO: traduzir logica do bytecode
}

// === h.h_hideNotify (()V) ===
// Instrucoes: 21
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   1x javax/microedition/lcdui/Canvas.serviceRepaints -> ??? javax/microedition/lcdui/Canvas.serviceRepaints
void h_hideNotify() {
    // TODO: traduzir logica do bytecode
}

// === h.h_case ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 46
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   1x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   1x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   1x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
void h_case() {
    // TODO: traduzir logica do bytecode
}

// === h.h_new ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 189
// APIs usadas:
//   6x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   6x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   4x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   2x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   2x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   2x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   2x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void h_new() {
    // TODO: traduzir logica do bytecode
}

// === h.h_int ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 196
// APIs usadas:
//   8x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   6x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   4x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   2x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   2x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   2x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   2x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void h_int() {
    // TODO: traduzir logica do bytecode
}

// === h.h_a_2 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 157
// APIs usadas:
//   7x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   5x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   2x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   2x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   2x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
void h_a_2() {
    // TODO: traduzir logica do bytecode
}

// === h.h_byte ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 395
// APIs usadas:
//   21x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   17x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   8x javax/microedition/lcdui/Graphics.fillRoundRect -> ??? javax/microedition/lcdui/Graphics.fillRoundRect
//   2x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
void h_byte() {
    // TODO: traduzir logica do bytecode
}

// === h.h_do_2 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 104
// APIs usadas:
//   4x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   3x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   3x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   1x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
void h_do_2() {
    // TODO: traduzir logica do bytecode
}

// === h.h_a_3 ((Ljavax/microedition/lcdui/Graphics;I)V) ===
// Instrucoes: 164
// APIs usadas:
//   11x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   2x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   1x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
void h_a_3() {
    // TODO: traduzir logica do bytecode
}

// === h.h_else ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 219
// APIs usadas:
//   7x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   3x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   3x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   3x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
//   2x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   1x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   1x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
void h_else() {
    // TODO: traduzir logica do bytecode
}

// === h.h_if_2 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 219
// APIs usadas:
//   7x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   3x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   3x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   3x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
//   2x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   1x javax/microedition/lcdui/Font.getFont -> ??? javax/microedition/lcdui/Font.getFont
//   1x javax/microedition/lcdui/Graphics.setFont -> j2me_noop
void h_if_2() {
    // TODO: traduzir logica do bytecode
}

// === h.h_try ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 354
// APIs usadas:
//   19x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   15x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   7x javax/microedition/lcdui/Graphics.fillRoundRect -> ??? javax/microedition/lcdui/Graphics.fillRoundRect
//   2x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Graphics.drawRect -> ??? javax/microedition/lcdui/Graphics.drawRect
void h_try() {
    // TODO: traduzir logica do bytecode
}

// === h.h_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 94
// APIs usadas:
//   2x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   1x java/lang/Runtime.getRuntime -> ??? java/lang/Runtime.getRuntime
//   1x java/lang/Runtime.freeMemory -> ??? java/lang/Runtime.freeMemory
//   1x java/lang/System.gc -> ??? java/lang/System.gc
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x java/io/PrintStream.println -> ??? java/io/PrintStream.println
void h_paint() {
    // TODO: traduzir logica do bytecode
}

// === h.h_keyPressed ((I)V) ===
// Instrucoes: 744
void h_keyPressed() {
    // TODO: traduzir logica do bytecode
}

// === h.h_keyRepeated ((I)V) ===
// Instrucoes: 6
void h_keyRepeated() {
    // TODO: traduzir logica do bytecode
}

// === h.h_keyReleased ((I)V) ===
// Instrucoes: 8
void h_keyReleased() {
    // TODO: traduzir logica do bytecode
}

// === h.h_ofusc_0326 ((Lh;)V) ===
// Instrucoes: 3
void h_ofusc_0326() {
    // TODO: traduzir logica do bytecode
}

// === h.h_ofusc_0329 ((Lh;Ljava/lang/Thread;)Ljava/lang/Thread;) ===
// Instrucoes: 5
Thread* h_ofusc_0329() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === h.h_ofusc_0327 ((Lh;)Ljava/lang/Thread;) ===
// Instrucoes: 3
Thread* h_ofusc_0327() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === i.i_constructor ((II)V) ===
// Instrucoes: 9
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
void i_constructor() {
    // TODO: traduzir logica do bytecode
}

// === j.j_constructor ((Lh;)V) ===
// Instrucoes: 28
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
void j_constructor() {
    // TODO: traduzir logica do bytecode
}

// === j.j_a (()V) ===
// Instrucoes: 16
// APIs usadas:
//   1x javax/microedition/rms/RecordStore.deleteRecordStore -> ??? javax/microedition/rms/RecordStore.deleteRecordStore
void j_a() {
    // TODO: traduzir logica do bytecode
}

// === j.j_if ((I)Z) ===
// Instrucoes: 27
int j_if() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === j.j_a_2 ((I)V) ===
// Instrucoes: 26
void j_a_2() {
    // TODO: traduzir logica do bytecode
}

// === j.j_for (()V) ===
// Instrucoes: 90
// APIs usadas:
//   2x javax/microedition/rms/RecordStore.getRecord -> ??? javax/microedition/rms/RecordStore.getRecord
//   2x java/io/ByteArrayInputStream.<init> -> ??? java/io/ByteArrayInputStream.<init>
//   2x java/io/DataInputStream.<init> -> ??? java/io/DataInputStream.<init>
//   2x java/io/DataInputStream.readBoolean -> ??? java/io/DataInputStream.readBoolean
//   2x javax/microedition/rms/RecordStore.closeRecordStore -> ??? javax/microedition/rms/RecordStore.closeRecordStore
//   2x java/io/PrintStream.println -> ??? java/io/PrintStream.println
//   1x javax/microedition/rms/RecordStore.openRecordStore -> ??? javax/microedition/rms/RecordStore.openRecordStore
//   1x javax/microedition/rms/RecordStore.getNumRecords -> ??? javax/microedition/rms/RecordStore.getNumRecords
void j_for() {
    // TODO: traduzir logica do bytecode
}

// === j.j_if_2 (()V) ===
// Instrucoes: 115
// APIs usadas:
//   4x javax/microedition/rms/RecordStore.addRecord -> ??? javax/microedition/rms/RecordStore.addRecord
//   3x java/io/PrintStream.println -> ??? java/io/PrintStream.println
//   2x javax/microedition/rms/RecordStore.openRecordStore -> ??? javax/microedition/rms/RecordStore.openRecordStore
//   2x java/io/ByteArrayOutputStream.<init> -> ??? java/io/ByteArrayOutputStream.<init>
//   2x java/io/DataOutputStream.<init> -> ??? java/io/DataOutputStream.<init>
//   2x java/io/DataOutputStream.writeBoolean -> ??? java/io/DataOutputStream.writeBoolean
//   2x java/io/ByteArrayOutputStream.toByteArray -> ??? java/io/ByteArrayOutputStream.toByteArray
//   2x javax/microedition/rms/RecordStore.closeRecordStore -> ??? javax/microedition/rms/RecordStore.closeRecordStore
void j_if_2() {
    // TODO: traduzir logica do bytecode
}

// === j.j_do ((I)V) ===
// Instrucoes: 75
// APIs usadas:
//   2x javax/microedition/rms/RecordStore.openRecordStore -> ??? javax/microedition/rms/RecordStore.openRecordStore
//   2x javax/microedition/rms/RecordStore.addRecord -> ??? javax/microedition/rms/RecordStore.addRecord
//   2x javax/microedition/rms/RecordStore.closeRecordStore -> ??? javax/microedition/rms/RecordStore.closeRecordStore
//   1x java/io/ByteArrayOutputStream.<init> -> ??? java/io/ByteArrayOutputStream.<init>
//   1x java/io/DataOutputStream.<init> -> ??? java/io/DataOutputStream.<init>
//   1x java/io/DataOutputStream.writeBoolean -> ??? java/io/DataOutputStream.writeBoolean
//   1x java/io/DataOutputStream.writeInt -> ??? java/io/DataOutputStream.writeInt
//   1x java/io/ByteArrayOutputStream.toByteArray -> ??? java/io/ByteArrayOutputStream.toByteArray
void j_do() {
    // TODO: traduzir logica do bytecode
}

// === j.j_do_2 (()V) ===
// Instrucoes: 65
// APIs usadas:
//   4x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   2x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   2x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   2x java/io/PrintStream.println -> ??? java/io/PrintStream.println
//   1x javax/microedition/rms/RecordStore.openRecordStore -> ??? javax/microedition/rms/RecordStore.openRecordStore
//   1x javax/microedition/rms/RecordStore.getNumRecords -> ??? javax/microedition/rms/RecordStore.getNumRecords
//   1x javax/microedition/rms/RecordStore.getRecord -> ??? javax/microedition/rms/RecordStore.getRecord
//   1x java/io/ByteArrayInputStream.<init> -> ??? java/io/ByteArrayInputStream.<init>
void j_do_2() {
    // TODO: traduzir logica do bytecode
}

// === k.k_constructor ((Ljavax/microedition/midlet/MIDlet;)V) ===
// Instrucoes: 30
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
//   1x java/lang/Throwable.printStackTrace -> ??? java/lang/Throwable.printStackTrace
void k_constructor() {
    // TODO: traduzir logica do bytecode
}

// === k.k_a ((Ljavax/microedition/midlet/MIDlet;Ljava/lang/String;[B)Lcom/nokia/mid/sound/Sound;) ===
// Instrucoes: 32
// APIs usadas:
//   1x java/lang/Object.getClass -> ??? java/lang/Object.getClass
//   1x java/lang/Class.getResourceAsStream -> ??? java/lang/Class.getResourceAsStream
//   1x java/io/DataInputStream.<init> -> ??? java/io/DataInputStream.<init>
//   1x java/io/DataInputStream.read -> ??? java/io/DataInputStream.read
//   1x java/lang/System.arraycopy -> memcpy
//   1x com/nokia/mid/sound/Sound.<init> -> ??? com/nokia/mid/sound/Sound.<init>
//   1x java/io/DataInputStream.close -> ??? java/io/DataInputStream.close
Sound* k_a() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === k.k_if (()V) ===
// Instrucoes: 9
// APIs usadas:
//   4x com/nokia/mid/sound/Sound.stop -> ??? com/nokia/mid/sound/Sound.stop
void k_if() {
    // TODO: traduzir logica do bytecode
}

// === k.k_a_2 (()V) ===
// Instrucoes: 7
// APIs usadas:
//   3x com/nokia/mid/sound/Sound.stop -> ??? com/nokia/mid/sound/Sound.stop
void k_a_2() {
    // TODO: traduzir logica do bytecode
}

// === k.k_for (()V) ===
// Instrucoes: 4
void k_for() {
    // TODO: traduzir logica do bytecode
}

// === k.k_int (()V) ===
// Instrucoes: 6
void k_int() {
    // TODO: traduzir logica do bytecode
}

// === k.k_do (()V) ===
// Instrucoes: 6
void k_do() {
    // TODO: traduzir logica do bytecode
}

// === k.k_new (()V) ===
// Instrucoes: 6
void k_new() {
    // TODO: traduzir logica do bytecode
}

// === k.k_a_3 ((Lcom/nokia/mid/sound/Sound;)V) ===
// Instrucoes: 7
// APIs usadas:
//   1x com/nokia/mid/sound/Sound.getState -> ??? com/nokia/mid/sound/Sound.getState
//   1x com/nokia/mid/sound/Sound.play -> ??? com/nokia/mid/sound/Sound.play
void k_a_3() {
    // TODO: traduzir logica do bytecode
}

// ============================================
// GAME LOOP PRINCIPAL
// ============================================

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;

        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);

        // TODO: chamar metodos do jogo aqui
        // KickBoxing_startApp();
        // c_paint();

        j2me_gfx_flip();
    }

    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}
