<?php
/**
 * @file
 * Admin setting Cruiseship to collect customer data
 */

/**
 * Implementation of customer_data_collection_admin().
 */
function customer_data_collection_admin()
{
    $form = array();

    $form['used_code_list'] = array(
        '#type' => 'markup',
        '#markup' => _used_contest_code_list(),
    );
    $form['intro_text'] = array(
        '#type' => 'textarea',
        '#title' => t('Introductory text'),
        '#default_value' => variable_get('introduction_text', t("Participate in the contest and win a luxurious 1-week cruise on the river Nile!")),
        '#description' => t("Add introductory text."),
        '#rows' => 5,
        '#required' => TRUE,
    );

    return system_settings_form($form);
}

/**
 * Implementation of customer_data_collection_admin().
 *
 * @variable_set set the introduction text
 */
function customer_data_collection_admin_validate($form, &$form_state)
{
    $intro_text = $form_state['values']['intro_text'];
    variable_set('introduction_text', $intro_text);
}

/**
 * Used contest code list
 */
function _used_contest_code_list() {

    $sql = "SELECT * FROM {cruiseship_customer_data}";
    $result = db_query($sql);

    /* with table */
    $header = array('ID', 'First Name', 'Last Name', 'email', 'Code', 'Date');
    $rows = array();

    // Looping for filling the table rows
    while($data = $result->fetchObject()){
        // Fill the table rows
        $rows[] = array(
            $data->id,
            $data->first_name,
            $data->last_name,
            $data->email,
            $data->known_code,
            $data->created,
        );
    }

    // Output of table with the paging
    $output = theme_table(
        array(
            "header" => $header,
            "rows" => $rows,
            "attributes" => array(),
            "sticky" => true,
            "caption" => "",
            "colgroups" => array(),
            "empty" => t("Table has no data!")
        )
    );
    return $output;
}