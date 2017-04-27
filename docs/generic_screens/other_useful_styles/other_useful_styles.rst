.. _other_useful_styles:

===================
Other Useful Styles
===================

These classes will not have a hierarchy and will be used throughout Peek.  These looks
classes attribute changes are found in
:file:`_bootstrap_adjustments.scss`.


Contextual Backgrounds
----------------------

Set the background of an element.

`Contextual Backgrounds <http://getbootstrap.com/css/#helper-classes-backgrounds>`_

Code extract of where contextual backgrounds can be used: ::

        <td class="td bg-success">
            <div class="inbox-icon">
                <i class="fa fa-comment" aria-hidden="true"></i>
            </div>
            <div class="inbox-row">

                <div class="inbox-title">Message Title or Subject</div>

                <div class="inbox-description">This is the message description</div>

                <div class="inbox-date-time">13 hours ago 20:03 05-Mar</div>

            </div>
            <div class="inbox-link-arrow"></div>
        </td>


Alignment Classes
-----------------

`Alignment Classes <http://getbootstrap.com/css/#type-alignment>`_

Code extract of where alignment classes can be used: ::

        <div *ngIf="appDetails.length"
             class="text-center h1">
          No Plugins Installed

        </div>


Typography
----------

:code:`.h1` through :code:`.h6` classes are available for when you want to match
the font styling of a heading but still want your text to be displayed inline.

`Typography <http://getbootstrap.com/css/#type>`_

Code extract of where typography can be used: ::

        <div *ngIf="appDetails.length"
             class="text-center h1">
          No Plugins Installed

        </div>

