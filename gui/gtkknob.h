/*
 * Copyright (C) 2011 Hermann Meyer, Andreas Degert
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * ---------------------------------------------------------------------------
 *
 *        file: gtkknob.h 
 *
 * ----------------------------------------------------------------------------
 */

#ifndef __GTK_DISTORTIONPLUS_KNOB_H__
#define __GTK_DISTORTIONPLUS_KNOB_H__

#ifdef __cplusplus
extern "C" {
#endif


#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GTK_TYPE_DISTORTIONPLUS_KNOB          (gtk_knob_get_type())
#define GTK_DISTORTIONPLUS_KNOB(obj)          (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_DISTORTIONPLUS_KNOB, GtkDistortionPlusKnob))
#define GTK_IS_DISTORTIONPLUS_KNOB(obj)       (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_DISTORTIONPLUS_KNOB))
#define GTK_DISTORTIONPLUS_KNOB_CLASS(klass)  (G_TYPE_CHECK_CLASS_CAST ((klass),  GTK_TYPE_DISTORTIONPLUS_KNOB, GtkDistortionPlusKnobClass))
#define GTK_IS_DISTORTIONPLUS_KNOB_CLASS(obj) (G_TYPE_CHECK_CLASS_TYPE ((klass),  GTK_TYPE_DISTORTIONPLUS_KNOB))
#define GTK_DISTORTIONPLUS_KNOB_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_DISTORTIONPLUS_KNOB, GtkDistortionPlusKnobClass))

typedef struct _GtkDistortionPlusKnob GtkDistortionPlusKnob;
typedef struct _GtkDistortionPlusKnobClass GtkDistortionPlusKnobClass;

struct _GtkDistortionPlusKnob {
    GtkRange parent;
    GdkPixbuf *pswitch_image;
    GdkPixbuf *switch_on_image;
    GdkPixbuf *switch_off_image;
};

struct _GtkDistortionPlusKnobClass {
    GtkRangeClass parent_class;
};

//------forward declaration
GType gtk_knob_get_type (void);

GtkWidget *gtk_knob_new_with_adjustment(GtkAdjustment *_adjustment);
GtkWidget *gtk_switch_new_with_adjustment(GtkAdjustment *_adjustment);
GtkWidget *gtk_trimmpot_new_with_adjustment(GtkAdjustment *_adjustment);
GtkWidget *gtk_power_switch_new_with_adjustment(GtkAdjustment *_adjustment);

G_END_DECLS

#ifdef  __cplusplus
}
#endif
#endif



