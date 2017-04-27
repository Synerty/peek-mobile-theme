.. _tables_screen:

=============
Tables Screen
=============

Any plugin screen will be able to use the :code:`.peek-tables-screen` attributes.


Looks Classes
-------------

The Tables looks classes are found in the :file:`_tables_screen.scss`.


Tables Screen :code:`.peek-tables-screen`
`````````````````````````````````````````

The :code:`.peek-tables-screen` class will contain the classes specific to a Tables
Screen.


Table :code:`.table`
````````````````````

The :code:`.table` class will contain:

*  :code:`table-striped`


Table :code:`.table-head`
`````````````````````````

The :code:`.table` class will contain:

*  :code:`tr`


Table :code:`.table-head-cell`
``````````````````````````````

The :code:`.table` class will contain:

*  :code:`th`


Table :code:`.table-row`
````````````````````````

The :code:`.table` class will contain:

*  :code:`tr`


Table :code:`.table-row-cell`
`````````````````````````````

The :code:`.table` class will contain:

*  :code:`td`


HTML Layout
-----------

The Tables Screen HTML layout classes are found in the
:file:`_tables_screen.web.scss`.


Display Samples
---------------

Below is the HTML code extract of table header and first two rows from
:ref:`tables_screen_tables_screen_example`: ::

        <table class="table">
            <thead>
                <tr class="table-head">
                    <th class="table-head-cell">Item</th>
                    <th class="table-head-cell">State</th>
                    <th class="table-head-cell">Location</th>
                    <th class="table-head-cell">Circuit / Details</th>
                </tr>
            </thead>
            <tbody>
        
                <tr class="table-row">
                    <td class="table-row-cell">1</td>
                    <td class="table-row-cell">Completed</td>
                    <td class="table-row-cell">Weedons ZS - R15/174</td>
                    <td class="table-row-cell">Unit 3342 Motor Trip
                        <br> Job</td>
                </tr>
                <tr class="table-row">
                    <td class="table-row-cell">2</td>
                    <td class="table-row-cell">Confirmed</td>
                    <td class="table-row-cell">Weedons ZS - R15/174</td>
                    <td class="table-row-cell">Unit 3342 Motor Trip
                        <br> Apply Scan Inhibit</td>
        
                </tr>
            </tbody>
        </table>


.. _tables_screen_tables_screen_example:

Tables Screen Example
---------------------

.. image:: ./tables_screen.web.jpg
