<?php
/**
 * @file
 * agro_export_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agro_export_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Export_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Campo: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Content: Categoria */
  $handler->display->display_options['fields']['field_tipologia']['id'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['field'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Content: Abitudine alimentare */
  $handler->display->display_options['fields']['field_abitudine_alimentare']['id'] = 'field_abitudine_alimentare';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['field'] = 'field_abitudine_alimentare';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_abitudine_alimentare']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['delta_offset'] = '0';
  /* Campo: Content: Allergie e intolleranze */
  $handler->display->display_options['fields']['field_allergene']['id'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['fields']['field_allergene']['field'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_allergene']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_allergene']['delta_offset'] = '0';
  /* Campo: Content: Luogo di produzione */
  $handler->display->display_options['fields']['field_prodotto_a']['id'] = 'field_prodotto_a';
  $handler->display->display_options['fields']['field_prodotto_a']['table'] = 'field_data_field_prodotto_a';
  $handler->display->display_options['fields']['field_prodotto_a']['field'] = 'field_prodotto_a';
  $handler->display->display_options['fields']['field_prodotto_a']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prodotto_a']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_prodotto_a']['delta_offset'] = '0';
  /* Campo: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Corpo';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Content: Filiera prodotto */
  $handler->display->display_options['fields']['field_filiera_prodotto']['id'] = 'field_filiera_prodotto';
  $handler->display->display_options['fields']['field_filiera_prodotto']['table'] = 'field_data_field_filiera_prodotto';
  $handler->display->display_options['fields']['field_filiera_prodotto']['field'] = 'field_filiera_prodotto';
  $handler->display->display_options['fields']['field_filiera_prodotto']['element_label_colon'] = FALSE;
  /* Campo: Content: Tecniche di produzione */
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['id'] = 'field_tecniche_di_produzione';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['table'] = 'field_data_field_tecniche_di_produzione';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['field'] = 'field_tecniche_di_produzione';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['element_label_colon'] = FALSE;
  /* Campo: Content: Tipologia produzione */
  $handler->display->display_options['fields']['field_tipologia_produzione']['id'] = 'field_tipologia_produzione';
  $handler->display->display_options['fields']['field_tipologia_produzione']['table'] = 'field_data_field_tipologia_produzione';
  $handler->display->display_options['fields']['field_tipologia_produzione']['field'] = 'field_tipologia_produzione';
  $handler->display->display_options['fields']['field_tipologia_produzione']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia_produzione']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Content: Storia */
  $handler->display->display_options['fields']['field_storia']['id'] = 'field_storia';
  $handler->display->display_options['fields']['field_storia']['table'] = 'field_data_field_storia';
  $handler->display->display_options['fields']['field_storia']['field'] = 'field_storia';
  $handler->display->display_options['fields']['field_storia']['element_label_colon'] = FALSE;
  /* Campo: Content: Turismo ed eventi */
  $handler->display->display_options['fields']['field_turismo_ed_eventi']['id'] = 'field_turismo_ed_eventi';
  $handler->display->display_options['fields']['field_turismo_ed_eventi']['table'] = 'field_data_field_turismo_ed_eventi';
  $handler->display->display_options['fields']['field_turismo_ed_eventi']['field'] = 'field_turismo_ed_eventi';
  $handler->display->display_options['fields']['field_turismo_ed_eventi']['element_label_colon'] = FALSE;
  /* Campo: Content: Codice a barre */
  $handler->display->display_options['fields']['field_codice_a_barre']['id'] = 'field_codice_a_barre';
  $handler->display->display_options['fields']['field_codice_a_barre']['table'] = 'field_data_field_codice_a_barre';
  $handler->display->display_options['fields']['field_codice_a_barre']['field'] = 'field_codice_a_barre';
  $handler->display->display_options['fields']['field_codice_a_barre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_codice_a_barre']['delta_offset'] = '0';
  /* Campo: Content: Immagine anteprima */
  $handler->display->display_options['fields']['field_immagine_anteprima']['id'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['table'] = 'field_data_field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['field'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_anteprima']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_anteprima']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_immagine_anteprima']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Campo: Content: Immagine copertina */
  $handler->display->display_options['fields']['field_immagine_copertina']['id'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['table'] = 'field_data_field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['field'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_copertina']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_copertina']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_immagine_copertina']['settings'] = array(
    'file_view_mode' => 'media_link',
  );
  /* Campo: Content: Gallery */
  $handler->display->display_options['fields']['field_gallery']['id'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['fields']['field_gallery']['field'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_gallery']['settings'] = array(
    'file_view_mode' => 'media_link',
  );
  $handler->display->display_options['fields']['field_gallery']['delta_offset'] = '0';
  /* Campo: Content: Ingredienti */
  $handler->display->display_options['fields']['field_ingredienti']['id'] = 'field_ingredienti';
  $handler->display->display_options['fields']['field_ingredienti']['table'] = 'field_data_field_ingredienti';
  $handler->display->display_options['fields']['field_ingredienti']['field'] = 'field_ingredienti';
  $handler->display->display_options['fields']['field_ingredienti']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ingredienti']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ingredienti']['delta_offset'] = '0';
  /* Campo: Content: Marchio */
  $handler->display->display_options['fields']['field_marchio']['id'] = 'field_marchio';
  $handler->display->display_options['fields']['field_marchio']['table'] = 'field_data_field_marchio';
  $handler->display->display_options['fields']['field_marchio']['field'] = 'field_marchio';
  $handler->display->display_options['fields']['field_marchio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_marchio']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_marchio']['delta_offset'] = '0';
  /* Campo: Content: Tags */
  $handler->display->display_options['fields']['field_tags_prodotto']['id'] = 'field_tags_prodotto';
  $handler->display->display_options['fields']['field_tags_prodotto']['table'] = 'field_data_field_tags_prodotto';
  $handler->display->display_options['fields']['field_tags_prodotto']['field'] = 'field_tags_prodotto';
  $handler->display->display_options['fields']['field_tags_prodotto']['label'] = 'Etichette';
  $handler->display->display_options['fields']['field_tags_prodotto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags_prodotto']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags_prodotto']['delta_offset'] = '0';
  /* Campo: Content: Porzione */
  $handler->display->display_options['fields']['field_porzione']['id'] = 'field_porzione';
  $handler->display->display_options['fields']['field_porzione']['table'] = 'field_data_field_porzione';
  $handler->display->display_options['fields']['field_porzione']['field'] = 'field_porzione';
  $handler->display->display_options['fields']['field_porzione']['element_label_colon'] = FALSE;
  /* Campo: Content: Ricette */
  $handler->display->display_options['fields']['field_ricette']['id'] = 'field_ricette';
  $handler->display->display_options['fields']['field_ricette']['table'] = 'field_data_field_ricette';
  $handler->display->display_options['fields']['field_ricette']['field'] = 'field_ricette';
  $handler->display->display_options['fields']['field_ricette']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ricette']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_ricette']['delta_offset'] = '0';
  /* Campo: Content: Amido */
  $handler->display->display_options['fields']['field_amido_tx']['id'] = 'field_amido_tx';
  $handler->display->display_options['fields']['field_amido_tx']['table'] = 'field_data_field_amido_tx';
  $handler->display->display_options['fields']['field_amido_tx']['field'] = 'field_amido_tx';
  $handler->display->display_options['fields']['field_amido_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Carboidrati */
  $handler->display->display_options['fields']['field_carboidrati_tx']['id'] = 'field_carboidrati_tx';
  $handler->display->display_options['fields']['field_carboidrati_tx']['table'] = 'field_data_field_carboidrati_tx';
  $handler->display->display_options['fields']['field_carboidrati_tx']['field'] = 'field_carboidrati_tx';
  $handler->display->display_options['fields']['field_carboidrati_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Fibre */
  $handler->display->display_options['fields']['field_fibre_tx']['id'] = 'field_fibre_tx';
  $handler->display->display_options['fields']['field_fibre_tx']['table'] = 'field_data_field_fibre_tx';
  $handler->display->display_options['fields']['field_fibre_tx']['field'] = 'field_fibre_tx';
  $handler->display->display_options['fields']['field_fibre_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Grassi */
  $handler->display->display_options['fields']['field_grassi_tx']['id'] = 'field_grassi_tx';
  $handler->display->display_options['fields']['field_grassi_tx']['table'] = 'field_data_field_grassi_tx';
  $handler->display->display_options['fields']['field_grassi_tx']['field'] = 'field_grassi_tx';
  $handler->display->display_options['fields']['field_grassi_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Grassi (di cui saturi) */
  $handler->display->display_options['fields']['field_grassi_di_cui_saturi_tx']['id'] = 'field_grassi_di_cui_saturi_tx';
  $handler->display->display_options['fields']['field_grassi_di_cui_saturi_tx']['table'] = 'field_data_field_grassi_di_cui_saturi_tx';
  $handler->display->display_options['fields']['field_grassi_di_cui_saturi_tx']['field'] = 'field_grassi_di_cui_saturi_tx';
  $handler->display->display_options['fields']['field_grassi_di_cui_saturi_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Minerali */
  $handler->display->display_options['fields']['field_minerali_tx']['id'] = 'field_minerali_tx';
  $handler->display->display_options['fields']['field_minerali_tx']['table'] = 'field_data_field_minerali_tx';
  $handler->display->display_options['fields']['field_minerali_tx']['field'] = 'field_minerali_tx';
  $handler->display->display_options['fields']['field_minerali_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Monoinsaturi */
  $handler->display->display_options['fields']['field_monoinsaturi_tx']['id'] = 'field_monoinsaturi_tx';
  $handler->display->display_options['fields']['field_monoinsaturi_tx']['table'] = 'field_data_field_monoinsaturi_tx';
  $handler->display->display_options['fields']['field_monoinsaturi_tx']['field'] = 'field_monoinsaturi_tx';
  $handler->display->display_options['fields']['field_monoinsaturi_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Polinsaturi */
  $handler->display->display_options['fields']['field_polinsaturi_tx']['id'] = 'field_polinsaturi_tx';
  $handler->display->display_options['fields']['field_polinsaturi_tx']['table'] = 'field_data_field_polinsaturi_tx';
  $handler->display->display_options['fields']['field_polinsaturi_tx']['field'] = 'field_polinsaturi_tx';
  $handler->display->display_options['fields']['field_polinsaturi_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Polioli */
  $handler->display->display_options['fields']['field_polioli_tx']['id'] = 'field_polioli_tx';
  $handler->display->display_options['fields']['field_polioli_tx']['table'] = 'field_data_field_polioli_tx';
  $handler->display->display_options['fields']['field_polioli_tx']['field'] = 'field_polioli_tx';
  $handler->display->display_options['fields']['field_polioli_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Proteine */
  $handler->display->display_options['fields']['field_proteine_tx']['id'] = 'field_proteine_tx';
  $handler->display->display_options['fields']['field_proteine_tx']['table'] = 'field_data_field_proteine_tx';
  $handler->display->display_options['fields']['field_proteine_tx']['field'] = 'field_proteine_tx';
  $handler->display->display_options['fields']['field_proteine_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Sodio */
  $handler->display->display_options['fields']['field_sodio_tx']['id'] = 'field_sodio_tx';
  $handler->display->display_options['fields']['field_sodio_tx']['table'] = 'field_data_field_sodio_tx';
  $handler->display->display_options['fields']['field_sodio_tx']['field'] = 'field_sodio_tx';
  $handler->display->display_options['fields']['field_sodio_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Valore energetico Kcal */
  $handler->display->display_options['fields']['field_valore_energetico_kcal_tx']['id'] = 'field_valore_energetico_kcal_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kcal_tx']['table'] = 'field_data_field_valore_energetico_kcal_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kcal_tx']['field'] = 'field_valore_energetico_kcal_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kcal_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Valore energetico Kj */
  $handler->display->display_options['fields']['field_valore_energetico_kj_tx']['id'] = 'field_valore_energetico_kj_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kj_tx']['table'] = 'field_data_field_valore_energetico_kj_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kj_tx']['field'] = 'field_valore_energetico_kj_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kj_tx']['element_label_colon'] = FALSE;
  /* Campo: Content: Vitamine */
  $handler->display->display_options['fields']['field_vitamine_tx']['id'] = 'field_vitamine_tx';
  $handler->display->display_options['fields']['field_vitamine_tx']['table'] = 'field_data_field_vitamine_tx';
  $handler->display->display_options['fields']['field_vitamine_tx']['field'] = 'field_vitamine_tx';
  $handler->display->display_options['fields']['field_vitamine_tx']['element_label_colon'] = FALSE;
  /* Criterio di ordinamento: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio del filtro: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group_type'] = 'sum';
  $handler->display->display_options['filters']['type']['value'] = array(
    'prodotto' => 'prodotto',
  );
  /* Criterio del filtro: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Lingua';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';

  /* Display: Prodotti export */
  $handler = $view->new_display('views_data_export', 'Prodotti export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%display%display%exposed.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group_type'] = 'sum';
  $handler->display->display_options['filters']['type']['value'] = array(
    'prodotto' => 'prodotto',
  );
  /* Criterio del filtro: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Lingua';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['language']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'prodotto_export';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Produttori export */
  $handler = $view->new_display('views_data_export', 'Produttori export', 'views_data_export_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%display%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_produttore_target_id']['id'] = 'field_produttore_target_id';
  $handler->display->display_options['relationships']['field_produttore_target_id']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['relationships']['field_produttore_target_id']['field'] = 'field_produttore_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Content: Sito web produttore */
  $handler->display->display_options['fields']['field_sito_azienda']['id'] = 'field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['table'] = 'field_data_field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['field'] = 'field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['relationship'] = 'field_produttore_target_id';
  $handler->display->display_options['fields']['field_sito_azienda']['element_label_colon'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Num. prodotti';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group_type'] = 'sum';
  $handler->display->display_options['filters']['type']['operator'] = 'in';
  /* Criterio del filtro: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Lingua';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['language']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'produttore_export';

  /* Display: Ricette export */
  $handler = $view->new_display('views_data_export', 'Ricette export', 'views_data_export_5');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'ricette%timestamp-full%exposed.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ricette_node']['id'] = 'reverse_field_ricette_node';
  $handler->display->display_options['relationships']['reverse_field_ricette_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ricette_node']['field'] = 'reverse_field_ricette_node';
  $handler->display->display_options['relationships']['reverse_field_ricette_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_ricette_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'Prodotto correlato';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Campo: Content: Difficoltà */
  $handler->display->display_options['fields']['field_difficolt_']['id'] = 'field_difficolt_';
  $handler->display->display_options['fields']['field_difficolt_']['table'] = 'field_data_field_difficolt_';
  $handler->display->display_options['fields']['field_difficolt_']['field'] = 'field_difficolt_';
  $handler->display->display_options['fields']['field_difficolt_']['element_label_colon'] = FALSE;
  /* Campo: Content: Tempo */
  $handler->display->display_options['fields']['field_tempo']['id'] = 'field_tempo';
  $handler->display->display_options['fields']['field_tempo']['table'] = 'field_data_field_tempo';
  $handler->display->display_options['fields']['field_tempo']['field'] = 'field_tempo';
  $handler->display->display_options['fields']['field_tempo']['element_label_colon'] = FALSE;
  /* Campo: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Preparazione';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Content: Ingredienti ricette */
  $handler->display->display_options['fields']['field_ingredienti_ricette']['id'] = 'field_ingredienti_ricette';
  $handler->display->display_options['fields']['field_ingredienti_ricette']['table'] = 'field_data_field_ingredienti_ricette';
  $handler->display->display_options['fields']['field_ingredienti_ricette']['field'] = 'field_ingredienti_ricette';
  $handler->display->display_options['fields']['field_ingredienti_ricette']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group_type'] = 'sum';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ricetta' => 'ricetta',
  );
  /* Criterio del filtro: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Lingua';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['language']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'ricetta_export';
  $export['Export_views'] = $view;

  return $export;
}
