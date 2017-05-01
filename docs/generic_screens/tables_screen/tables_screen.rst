.. _tables_screen:

=============
Tables Screen
=============

Any plugin screen will be able to use the :code:`.peek-tables-screen` attributes.


Looks Classes
-------------

The Tables looks classes are found in the :file:`_tables_screen.scss`.

.. _tables_screen_tables_screen:

Tables Screen :code:`.peek-tables-screen`
`````````````````````````````````````````

.. image:: ./tables_screen.web.jpg
  :align: center

The :code:`.peek-tables-screen` class contain the classes specific to a Tables
Screen.

::

        .peek-tables-screen{
        <!-- Contains the Tables Screen looks classes -->
            ...

            .table{
            <!-- Contains the table looks attributes unique to the Tables Screen -->
                ...

                .table-head{
                <!-- Contains the table header looks attributes unique to the .table class -->
                    ...
                
                }
                .th{
                <!-- Contains the table head cell looks attributes unique to the .table class -->
                    ...

                }
                .tr{
                <!-- Contains the table row looks attributes unique to the .table class -->
                    ...

                }
                .td{
                <!-- Contains the table row cell looks attributes unique to the .table class -->
                    ...

                }
            }
        }


Layout
------


HTML
````

The Tables Screen HTML layout classes are found in the
:file:`_tables_screen.web.scss`.


NativeScript
````````````

The Tables Screen NativeScript layout classes are found in the
:file:`_tables_screen.ns.scss`.


Code Extract
------------

Below is the HTML code extract of table header and first two rows from
:ref:`tables_screen_tables_screen`: ::

        <div class="peek-tables-screen">
          <table class="table">
                  <tr class="table-head">
                      <th class="th">Item</th>
                      <th class="th">State</th>
                      <th class="th">Location</th>
                      <th class="th">Circuit / Details</th>
                  </tr>
                  <tr class="tr">
                      <td class="td">1</td>
                      <td class="td">Completed</td>
                      <td class="td">Weedons ZS - R15/174</td>
                      <td class="td">Unit 3342 Motor Trip
                          <br> Job</td>
                  </tr>
                  <tr class="tr">
                      <td class="td">2</td>
                      <td class="td">Confirmed</td>
                      <td class="td">Weedons ZS - R15/174</td>
                      <td class="td">Unit 3342 Motor Trip
                          <br> Apply Scan Inhibit</td>
                  </tr>
          </table>
        </div>
