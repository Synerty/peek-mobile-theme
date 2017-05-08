.. _footer:

======
Footer
======

.. image:: ./footer.web.jpg
  :align: center

The footer is fixed at the bottom of the screen.

Text is always centered in the footer.

The text remains a single line and truncates a "..." if the line exceeds the minimum
screen width.


Looks Classes
-------------

The Footer looks classes are found in the :file:`_footer.scss`.


Footer :code:`.peek-footer`
```````````````````````````

The :code:`.peek-footer` class contains the classes specific to the Footer.

::

        .peek-footer{
        /* Contains the Footer looks classes */
            ...

            }
            .title{
            /*
                Contains the title looks attributes unique to the Footer
                This title will be dynamically set by the plugins installed
            */
                ...

            }
        }


HTML
~~~~

.. image:: ./footer.web.jpg
  :align: center

::

        <div class="peek-footer">
          <div class="title">Offline, xxx minutes</div>
        </div>


NativeScript
~~~~~~~~~~~~

::

        <GridLayout class="peek-footer"
            ...

        </GridLayout>


Layout
------


HTML
````

The Footer HTML layout classes are found in the :file:`_footer.web.scss`.


NativeScript
````````````

The Footer NativeScript layout classes are found in the :file:`_footer.ns.scss`.
