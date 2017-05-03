.. _title_bar:

=========
Title Bar
=========

.. image:: ./title_bar.web.jpg
  :align: center

The Title Bar is fixed to the top of the screen.

The buttons remain a fixed size throughout a responsive lifecycle.

Plugins can add buttons after the "Home" button on the left, or on the right of the
Title Bar.

The buttons on the right of the Title Bar will range from none to three.

The Title Bar will contain no more than four buttons.

The centralized title remains a single line and truncates a :code:`...` if the line
exceeds the minimum screen width.

The title has a fixed width of 40px.

The Title Bar is unique, therefore the classes used will be specific for the
Title Bar.


Looks Classes
-------------

The Title Bar looks classes are found in the :file:`_title_bar.scss`.


Title Bar :code:`.peek-title-bar`
`````````````````````````````````

The :code:`.peek-title-bar` class contains the looks classes specific to the Title Bar.

::

        .peek-title-bar{
        /* Contains the Title Bar looks classes */
            ...

            .container-fluid{
            /* Contains the container looks attributes unique to the Title Bar */
                ...

            }
            .row{
            /* Contains the row looks attributes unique to the Title Bar */
                ...

            }
            .btn-group{
            /* Contains the button group looks attributes unique to the Title Bar */
                ...

            }
            .btn{
            /* Contains the button looks attributes unique to the Title Bar */
                ...

            }
            .title{
            /* Contains the title looks attributes unique to the Title Bar */
                ...

            }
        }


HTML
~~~~

.. image:: ./title_bar.web.jpg
  :align: center

::

        <div class="peek-title-bar">
            <div class="container-fluid">
                <div class="row">
                    <div class="btn-group pull-left" role="group">
                        <button class="btn">Home</button>
                    </div>
                    <div class="title">Peek Title</div>
                    <div class="btn-group pull-right" role="group">
                        <button class="btn">(14) Tasks</button>
                        <button class="btn">User</button>
                    </div>
                </div>
            </div>
        </div>


NativeScript
~~~~~~~~~~~~

.. image:: ./title_bar.ns.jpg
  :align: center

::

        <GridLayout class="peek-title-bar"
            ...

        </GridLayout>


Layout
------


HTML
````

The Title Bar HTML layout classes are found in the :file:`_title_bar.web.scss`.


NativeScript
````````````

The Title Bar NativeScript layout classes are found in the
:file:`_title_bar.ns.scss`.
