.. _footer:

======
Footer
======

The footer is fixed at the bottom of the screen.

Text is always centered in the footer.

The text remains a single line and truncates a "..." if the line exceeds the minimum
screen width.


Looks Classes
-------------

The Footer looks classes are found in the :file:`_footer.scss`.


Footer :code:`.peek-footer`
```````````````````````````

.. image:: ./footer.web.jpg
  :align: center

The :code:`.peek-footer` class contains the classes specific to the Footer.

::

        .peek-footer{
        <!-- Contains the Footer looks classes -->

          .title{
          <!-- Contains the title looks attributes unique to the Footer -->

          ...

          }
        }




Text :code:`.title`
```````````````````

The :code:`.title` class styles the dynamic title.


Layout
------

HTML:

The Footer HTML layout classes are found in the :file:`_footer.web.scss`.

NativeScript:

The Footer NativeScript layout classes are found in the :file:`_footer.ns.scss`.

