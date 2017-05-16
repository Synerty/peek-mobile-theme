.. _tables_section:

==============
Tables Section
==============

The Tables Section is best suited when there's logical relationships among text,
numbers, images, or other data exist in two dimensions (vertical and horizontal).
These relationships are represented in columns and rows, and the columns and rows must
be recognizable in order for the logical relationships to be perceived.

Useful for viewing detailed data and precise values, good for comparing individual values.

.. image:: ./tables_section.web.jpg
  :align: center

The objective of this technique is to present tabular information in a way that
preserves relationships within the information.

*  Filter or sort data

*  Show exact data

*  Visualise single or two dimensional data.

Any plugin Screen will be able to use the :code:`.peek-tables-section` attributes.


Classes
-------

The :code:`.peek-tables-section` class contain the classes specific to a Tables
Section.

::

        .peek-tables-section{
        /* Contains the Tables Section classes */
            ...

            .table{
            /* Contains the table attributes unique to the Tables Section */
                ...

                .tr{
                /* Contains the table row attributes unique to the .table class */
                    ...

                }
                .th{
                /* Contains the table head cell attributes unique to the .table class */
                    ...

                }
                .td{
                /* Contains the table row cell attributes unique to the .table class */
                    ...

                }
            }
        }


SCSS Files
----------

The Tables style classes are found in the
:file:`_tables_section.scss`.

The Tables Section HTML layout classes are found in the
:file:`_tables_section.web.scss`.

The Tables Section NativeScript layout classes are found in the
:file:`_tables_section.ns.scss`.


HTML
----

The Tables Section uses Bootstraps `Tables <http://getbootstrap.com/css/#tables>`_.

Below is the HTML code extract of table header and first two rows from
:ref:`tables_section_tables_section`: ::

        <div class="peek-tables-section">
            <table class="table">
            <!-- Table contains table rows, 'tr' -->
                <tr class="tr">
                <!--
                    Row of cells
                    Contains table header cells, 'th' or table cells, 'td'
                    Header cells can be used anywhere as needed
                -->
                    <th class="th">Item</th>
                    <th class="th">State</th>
                    <th class="th">Location</th>
                    <th class="th">Circuit / Details</th>
                </tr>
                <tr class="tr">
                <!--
                    Row of cells
                    Contains table header cells, 'th' or table cells, 'td'
                    Header cells can be used anywhere as needed
                -->
                    <td class="td">1</td>
                    <td class="td">Completed</td>
                    <td class="td">Weedons ZS - R15/174</td>
                    <td class="td">Unit 3342 Motor Trip
                        <br> Job
                    </td>
                </tr>
                <tr class="tr">
                <!--
                    Row of cells
                    Contains table header cells, 'th' or table cells, 'td'
                    Header cells can be used anywhere as needed
                -->
                    <td class="td">2</td>
                    <td class="td">Confirmed</td>
                    <td class="td">Weedons ZS - R15/174</td>
                    <td class="td">Unit 3342 Motor Trip
                        <br> Apply Scan Inhibit
                    </td>
                </tr>
            </table>
        </div>
