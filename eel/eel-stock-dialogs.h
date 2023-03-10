
/* eel-stock-dialogs.h: Various standard dialogs for Eel.

   Copyright (C) 2000 Eazel, Inc.

   The Gnome Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The Gnome Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the Gnome Library; see the file COPYING.LIB.  If not,
   see <http://www.gnu.org/licenses/>.

   Authors: Darin Adler <darin@eazel.com>
*/

#pragma once

#include <gtk/gtk.h>

typedef void (* EelCancelCallback) (gpointer callback_data);

/* Dialog for cancelling something that normally is fast enough not to need a dialog. */
void       eel_timed_wait_start               (EelCancelCallback  cancel_callback,
					       gpointer           callback_data,
					       const char        *wait_message,
					       GtkWindow         *parent_window);
void       eel_timed_wait_start_with_duration (int                duration,
					       EelCancelCallback  cancel_callback,
					       gpointer           callback_data,
					       const char        *wait_message,
					       GtkWindow         *parent_window);
void       eel_timed_wait_stop                (EelCancelCallback  cancel_callback,
					       gpointer           callback_data);

/* Basic dialog with buttons. */
GtkDialog *eel_show_simple_dialog             (GtkWidget         *parent,
					       GtkMessageType     message_type,
					       const char        *primary_text,
					       const char        *secondary_text,
					       ...);

/* Variations on gnome stock dialogs; these do line wrapping, we don't
 * bother with non-parented versions, we allow setting the title,
 * primary, and secondary messages, and we return GtkDialog pointers 
 * instead of GtkWidget pointers.
 */
GtkDialog *eel_show_info_dialog               (const char        *primary_text,
					       const char        *secondary_text,
					       GtkWindow         *parent);
GtkDialog *eel_show_warning_dialog            (const char        *primary_text,
					       const char        *secondary_text,
					       GtkWindow         *parent);
GtkDialog *eel_show_error_dialog              (const char        *primary_text,
					       const char        *secondary_text,
					       GtkWindow         *parent);
GtkDialog *eel_show_yes_no_dialog             (const char        *primary_text,
					       const char        *secondary_text,
					       const char        *yes_label,
					       const char        *no_label,
					       GtkWindow         *parent);
GtkDialog *eel_create_question_dialog         (const char        *primary_text,
					       const char        *secondary_text,
					       const char        *answer_one,
					       int                response_one,
					       const char        *answer_two,
					       int                response_two,
					       GtkWindow         *parent);
